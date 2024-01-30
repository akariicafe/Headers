@class NSArray, NSString, IDSDatagramChannel, IDSDataChannelLinkContext;

@interface VCDatagramChannelIDS : VCObject {
    IDSDatagramChannel *_idsChannel;
    int _vtpSocket;
    id /* block */ _eventHandler;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) unsigned int token;
@property (readonly) NSString *destination;
@property (readonly) int dataPath;

- (void)setEventHandler:(id /* block */)a0;
- (void)dealloc;
- (int)start;
- (void)invalidate;
- (void)setReadHandler:(id /* block */)a0;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)requestSessionInfoWithOptions:(id)a0;
- (void)setChannelPreferences:(id)a0;
- (void)setWiFiAssist:(BOOL)a0;
- (void)setWriteCompletionHandler:(id /* block */)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)startMKMRecoveryForParticipantIDs:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a3 completionHandler:(id /* block */)a4;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (void)queryProbingResultsWithOptions:(id)a0;
- (void)optInStreamIDs:(id)a0;
- (id)VTPConnectionContext;
- (id)datagramChannelOptions;
- (id)datagramChannelWithDestination:(id)a0 error:(id *)a1;
- (id)initWithDestination:(id)a0 token:(unsigned int)a1 dataPath:(int)a2 error:(id *)a3;
- (id)initWithSocketDescriptor:(int)a0 token:(unsigned int)a1 error:(id *)a2;
- (void)optOutStreamIDs:(id)a0;
- (void)setOneToOneModeEnabled:(BOOL)a0 isInitiator:(BOOL)a1;
- (int)setupVTPSocketWithFileDescriptor:(int)a0;
- (id)sharedIDSService;

@end
