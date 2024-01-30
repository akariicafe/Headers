@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (void)startServiceWithNotificationHandler:(id)a0;
+ (void)startServiceWithStateBroadcastHandler:(id)a0;
+ (id)_sharedService;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)startWithNotificationHandler:(id)a0;
- (void)startWithStateBroadcastHandler:(id)a0;
- (void)_configureNotificationService;
- (void)_configureStateBroadcastService;

@end
