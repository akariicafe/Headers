@class HMDDataStreamFrameReader, NSString, NSObject, HMFNetAddress;
@protocol OS_dispatch_queue, OS_tcp_connection, HMDDataStreamTransportDelegate;

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {
    BOOL _connected;
    long long _remotePort;
    int _schedulingMode;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFNetAddress *remoteAddress;
@property (retain, nonatomic) NSObject<OS_tcp_connection> *tcpConnection;
@property (readonly, nonatomic) HMDDataStreamFrameReader *byteReader;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDDataStreamTransportDelegate> delegate;

+ (id)logCategory;

- (void)connect;
- (void)_start;
- (void)close;
- (void)_stop;
- (void)setTrafficClass:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAddress:(id)a0 port:(long long)a1 workQueue:(id)a2 logIdentifier:(id)a3;
- (id)initWithAddress:(id)a0 port:(long long)a1 targetQueue:(id)a2 logIdentifier:(id)a3;
- (void)sendRawFrame:(id)a0 completion:(id /* block */)a1;
- (id)_createTcpConnection;
- (void)_consumeReceivedData:(id)a0;
- (void)_doReceive;

@end
