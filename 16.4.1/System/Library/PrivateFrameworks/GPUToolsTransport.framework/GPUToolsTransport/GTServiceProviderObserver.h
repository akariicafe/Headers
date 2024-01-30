@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTServiceProviderObserver : NSObject <GTServiceProviderObserver> {
    unsigned long long _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> _connection;
}

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 notifyConnection:(id)a1;
- (void)notifyServiceListChanged:(id)a0;

@end
