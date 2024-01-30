@class NSArray, NSString, IDSDatagramChannel, IDSDataChannelLinkContext;

@interface VCDatagramChannelIDS : VCObject {
    IDSDatagramChannel *_idsChannel;
    int _driverSocket;
    id /* block */ _eventHandler;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) unsigned int token;
@property (readonly) NSString *destination;

- (void)setEventHandler:(id /* block */)a0;
- (void)dealloc;
- (void)readyToRead;
- (void)setChannelPreferences:(id)a0;
- (void)osChannelInfoLog;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; } *)a3 completionHandler:(id /* block */)a4;
- (void)setReadHandler:(id /* block */)a0;
- (void)setWiFiAssist:(BOOL)a0;
- (void)startActiveProbingWithOptions:(id)a0;
- (void)stopActiveProbingWithOptions:(id)a0;
- (void)flushLinkProbingStatusWithOptions:(id)a0;
- (void)startMKMRecoveryForParticipantIDs:(id)a0;
- (void)requestSessionInfoWithOptions:(id)a0;
- (id)sharedIDSService;
- (int)start;
- (void)invalidate;
- (id)initWithSocketDescriptor:(int)a0 token:(unsigned int)a1 error:(id *)a2;
- (id)initWithDestination:(id)a0 token:(unsigned int)a1 error:(id *)a2;
- (id)datagramChannelWithDestination:(id)a0 error:(id *)a1;
- (int)setupDriverSocket;
- (void)queryProbingResultsWithOptions:(id)a0;
- (void)optInStreamIDs:(id)a0;
- (void)optOutStreamIDs:(id)a0;

@end
