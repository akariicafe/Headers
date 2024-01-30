@class NEConfiguration, NSObject;
@protocol OS_dispatch_queue, NEVPNConnectivitySessionDelegate;

@interface NEVPNConnectivitySession : NSObject {
    NEConfiguration *_configuration;
    void *_session;
    id<NEVPNConnectivitySessionDelegate> _delegate;
    id /* block */ _pendingCancelCompletionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
