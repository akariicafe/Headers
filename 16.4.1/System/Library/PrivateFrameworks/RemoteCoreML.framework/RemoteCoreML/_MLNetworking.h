@class _MLNetworkOptions, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_nw_protocol_stack, OS_nw_parameters, OS_nw_connection, OS_nw_listener;

@interface _MLNetworking : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (readonly, nonatomic) NSObject<OS_nw_listener> *listener;
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions;
@property (readonly, nonatomic) NSObject<OS_nw_protocol_stack> *protocol_stack;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) BOOL isClient;
@property (readonly, nonatomic) NSObject<OS_os_log> *logType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q;

- (void)startConnection;
- (void)stop;
- (void).cxx_destruct;
- (void)sendData:(id)a0;
- (id)initConnection:(id)a0;
- (void)setListenerReceiveDataCallBack:(id /* block */)a0;
- (id)initListener:(id)a0;
- (void)receiveLoop:(id /* block */)a0;
- (void)restartConnection;
- (void)setReceiveDataCallBack:(id /* block */)a0;

@end
