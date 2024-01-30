@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTMTLReplayErrorObserver : NSObject <GTMTLReplayErrorObserver> {
    unsigned long long _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> _connection;
}

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 notifyConnection:(id)a1;
- (void)sendErrorToHost:(id)a0;

@end
