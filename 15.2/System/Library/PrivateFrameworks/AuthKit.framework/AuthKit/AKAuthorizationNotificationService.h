@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:(id)a0;
+ (void)startServiceWithStateBroadcastHandler:(id)a0;

- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)startWithNotificationHandler:(id)a0;
- (void)startWithStateBroadcastHandler:(id)a0;
- (void)_configureNotificationService;
- (void)_configureStateBroadcastService;
- (void).cxx_destruct;
- (id)init;

@end
