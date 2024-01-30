@class NSDictionary, VCMockIDSDataChannelLinkContext, NSLock;

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {
    NSDictionary *_subscribedStreamsByParticipantID;
    int _socket;
    BOOL _isValid;
    VCMockIDSDataChannelLinkContext *_linkContext;
    id /* block */ _eventHandler;
    id /* block */ _readHandler;
    id /* block */ _readHandlerWithOptions;
    id /* block */ _writeDatagramsBlock;
    id /* block */ _writeDatagramBlock;
    id /* block */ _readyToReadBlock;
    NSLock *_blockSettingLock;
    struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } _datagramPackets;
    struct __CFAllocator { } *_datagramPacketAllocator;
    unsigned long long _datagramPacketNextSequenceNumber;
    BOOL _usingOptions;
    double _emulatedRxPLR;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _streamSubscriptionLock;
    long long _participantGenerationCounter;
    BOOL _isTestingOneToOneMode;
    unsigned short numPacketSent;
    unsigned short numPacketReceived;
}

- (void)setEventHandler:(id /* block */)a0;
- (void)start;
- (int)readyToRead;
- (void)readDatagramWithCompletionHandler:(id /* block */)a0;
- (void)readDatagramsWithCompletionHandler:(id /* block */)a0;
- (void)osChannelInfoLog;
- (void)setChannelPreferences:(id)a0;
- (void)invalidate;
- (int)underlyingFileDescriptor;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 flags:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 completionHandler:(id /* block */)a3;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (void)setReadHandler:(id /* block */)a0;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a3 completionHandler:(id /* block */)a4;
- (void)setReadHandlerWithOptions:(id /* block */)a0;
- (void)setWiFiAssist:(BOOL)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)queryStatusWithOptions:(id)a0;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (void)requestSessionInfoWithOptions:(id)a0;
- (void)reportFirstPacketTimeForMKI:(id)a0;
- (void)dealloc;
- (void)queryProbingResultsWithOptions:(id)a0;
- (BOOL)setupMockIDSDatagramChannelRequiresOptions:(BOOL)a0;
- (BOOL)createSocket;
- (void)flushDatagramPacketsList;
- (void)signalUnderlyingFileDescriptor;
- (BOOL)isControlChannelDatagram:(struct _VCMockIDSDatagramChannelPacket { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry *x0; } x0; unsigned char x1[1500]; unsigned long long x2; BOOL x3; struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } x4; unsigned long long x5; } *)a0;
- (id)newArrayOfStreamIdsForPacket:(struct _VCMockIDSDatagramChannelPacket { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry *x0; } x0; unsigned char x1[1500]; unsigned long long x2; BOOL x3; struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } x4; unsigned long long x5; } *)a0;
- (BOOL)shouldReadPacket:(struct _VCMockIDSDatagramChannelPacket { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry *x0; } x0; unsigned char x1[1500]; unsigned long long x2; BOOL x3; struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } x4; unsigned long long x5; } *)a0;
- (BOOL)enqueueDatagramPacket:(const void *)a0 datagramSize:(unsigned int)a1 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a2 error:(id *)a3;
- (int)drainUnderlyingFileDescriptor;
- (void)readDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a2;
- (void)dequeueDatagramPacket:(id /* block */)a0;
- (id)initRequiresOptions:(BOOL)a0;
- (id)initCreateSocketRequiresOptions:(BOOL)a0;
- (void)setWriteDatagramsBlock:(id /* block */)a0;
- (void)setWriteDatagramBlock:(id /* block */)a0;
- (void)setReadyToReadBlock:(id /* block */)a0;
- (void)setUPlusOneMode:(BOOL)a0;

@end
