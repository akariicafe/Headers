@class HMDDataStreamFrameReader, NSString, NSObject, HMFNetAddress;
@protocol OS_dispatch_queue, OS_tcp_connection, HMDDataStreamTransportDelegate;

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {
    BOOL _connected;
    long long _remotePort;
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
- (void)_stop;
- (void)_start;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAddress:(id)a0 port:(long long)a1 workQueue:(id)a2 logIdentifier:(id)a3;
- (void)sendRawFrame:(id)a0 completion:(id /* block */)a1;
- (void)_doReceive;
- (void)_consumeReceivedData:(id)a0;

@end
