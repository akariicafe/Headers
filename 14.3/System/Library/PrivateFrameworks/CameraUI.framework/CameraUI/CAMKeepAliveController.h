@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface CAMKeepAliveController : NSObject

@property (retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_keepAliveQueue;
@property (retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_heartbeatQueue;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (id)init;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void)_teardownHeartbeat;
- (void)_keepAliveQueueTeardownConnection;
- (void)_keepAliveQueueTeardownHeartbeat;
- (void)sendCameraRollVisibilityChangedMessage:(BOOL)a0;
- (void)_teardownConnection;
- (void)_handleHeartbeatConnectionReply:(id)a0;
- (void)startKeepAliveSession;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_setupConnectionIfNecessary;
- (void)stopKeepAliveSession;
- (void)_handleHeartbeatSourceEvent;

@end
