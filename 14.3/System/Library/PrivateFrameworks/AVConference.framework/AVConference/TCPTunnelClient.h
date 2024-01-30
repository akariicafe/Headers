@class TCPBufferPool, NSString, NSMutableDictionary, NSDictionary, NSData, NSObject, NSMutableData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {
    int _connectState;
    int _connectedFD;
    int _isChannelBound;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> *_timer;
    float _fTimeout;
    unsigned short _channelNumber;
    NSMutableDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } _serverIPPort;
    NSData *_allocateReq;
    NSData *_channelBReq;
    double _allocationTimestamp;
    NSMutableData *_currentlyReadingMessage;
    long long _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    long long _currentPadding;
    char *_writeBuf;
    int _head;
    int _tail;
    TCPBufferPool *_bufferPool;
}

@property (copy) id /* block */ receiveHandler;
@property (copy) id /* block */ allocationResponseHandler;
@property (copy) id /* block */ terminationHandler;
@property (copy) id /* block */ bindingResponseHandler;
@property (copy) id /* block */ destroyHandler;
@property (copy) NSString *participantID;

- (unsigned int)connectionType;
- (void)dealloc;
- (void)resetConnection;
- (void)destroyDispatchTimer;
- (void)reportErrorAndTerminate:(long long)a0 detail:(long long)a1 returnCode:(long long)a2 description:(id)a3 reason:(id)a4;
- (void)receivedControlData:(id)a0;
- (void)sendTCPData:(const void *)a0 bufSize:(int)a1;
- (void)createDispatchTimer:(float)a0 withDetailedError:(long long)a1;
- (void)vcArg:(id)a0 sendControlData:(id)a1 isTypeSSL:(BOOL)a2 withTimeout:(float)a3 withDetail:(long long)a4;
- (BOOL)sendRefreshMsg:(unsigned int)a0 error:(id *)a1;
- (BOOL)sendChannelBindingMsgWithDict:(id)a0 error:(id *)a1;
- (void)receivedSSLConnectionData:(id)a0 recordType:(unsigned short)a1;
- (void)processSocketWrite:(unsigned char)a0;
- (void)processSocketRead;
- (void)processSocketReadSSL;
- (void)vcArg:(id)a0 sendRealTimeData:(id)a1 toParticipantID:(id)a2;
- (id)initWithRelayRequestDictionary:(id)a0 withCallID:(unsigned int)a1 relayType:(unsigned char)a2 errorCode:(int *)a3;
- (BOOL)sendAllocateMsg:(id *)a0;
- (void)unbindChannel;
- (void)closeTunnelSocket;
- (BOOL)isTunnelSocketClosed;

@end
