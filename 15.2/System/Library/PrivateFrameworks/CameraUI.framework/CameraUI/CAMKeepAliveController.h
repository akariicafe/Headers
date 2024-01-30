@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface CAMKeepAliveController : NSObject

@property (retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_keepAliveQueue;
@property (retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_heartbeatQueue;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void)sendCameraRollVisibilityChangedMessage:(BOOL)a0;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void)stopKeepAliveSession;
- (void)_teardownConnection;
- (void)_handleHeartbeatConnectionReply:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_teardownHeartbeat;
- (void)_setupConnectionIfNecessary;
- (void)_handleHeartbeatSourceEvent;
- (void)_keepAliveQueueTeardownHeartbeat;
- (void)_keepAliveQueueTeardownConnection;
- (void)dealloc;
- (void)startKeepAliveSession;

@end
