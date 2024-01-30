@class NSString, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface HMDNetworkConnection : NSObject <HMDNetworkConnection>

@property (readonly, nonatomic) NSObject<OS_nw_connection> *nwConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStateChangedHandler:(id /* block */)a0;
- (void)cancel;
- (void)start;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (void)receiveMessageWithCompletion:(id /* block */)a0;
- (void)sendData:(id)a0 context:(id)a1 isComplete:(BOOL)a2 completion:(id /* block */)a3;
- (void)receiveWithMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 completion:(id /* block */)a2;
- (void)resetTrafficClass:(unsigned long long)a0;
- (void)setReadCloseHandler:(id /* block */)a0;

@end
