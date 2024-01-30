@class NSArray, IDSDataChannelLinkContext, _IDSDatagramChannel;

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel *_internal;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

+ (id)realTimeContext;

- (void)close;
- (id)description;
- (void)setEventHandler:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (void)readyToRead;
- (id)initWithSocketDescriptor:(int)a0;
- (void)sendMetadata;
- (void)readDatagramWithCompletionHandler:(id /* block */)a0;
- (void)readDatagramsWithCompletionHandler:(id /* block */)a0;
- (void)_reportFirstPacketTimeForMKI:(id)a0;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)a0 linkAttributesLength:(unsigned short)a1;
- (void)removeIDSDataChannelLinkContext:(char)a0 linkUUID:(id)a1 reason:(unsigned char)a2;
- (void)selectDefaultLink:(char)a0;
- (void)sendMediaMembershipChangedInfo:(unsigned char)a0;
- (void)sendMediaEncryptionInfoWithMKM:(id)a0 MKS:(id)a1 MKI:(id)a2 isLocallyGenerated:(BOOL)a3 encryptionSequenceNumber:(unsigned long long)a4;
- (void)osChannelInfoLog;
- (void)processMetadataForDatagram:(char *)a0 size:(unsigned long long)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a3;
- (void)_logReceivingStats:(unsigned long long)a0;
- (void)setChannelPreferences:(id)a0;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)_logSendingStats:(unsigned long long)a0;
- (void)generateMetadataWithDatagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a0 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a1 currentDatagramCount:(unsigned char)a2 totalDatagramCount:(unsigned char)a3 byteBuffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a4;
- (void)writeDatagrams:(const void **)a0 datagramSizes:(unsigned int *)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 datagramCount:(int)a3 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a4 completionHandler:(id /* block */)a5;
- (struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x12; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x13; unsigned short x14; unsigned char x15; int x16; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; unsigned int x17; } x17[8]; char x18; char x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; } *)_setWiFiAssist:(BOOL)a0;
- (void)invalidate;
- (void)_writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; } *)a3 completionHandler:(id /* block */)a4;
- (void)_buildPacketBufferMetaData:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x12; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x13; unsigned short x14; unsigned char x15; int x16; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; unsigned int x17; } x17[8]; char x18; char x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; } *)a0;
- (id)cachedMetadata;
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
- (void)setUPlusOneMode:(BOOL)a0 isInitiator:(BOOL)a1;
- (void)startMKMRecoveryForParticipantIDs:(id)a0;
- (void)requestSessionInfoWithOptions:(id)a0;
- (void)reportFirstPacketTimeForMKI:(id)a0;
- (void)dealloc;

@end
