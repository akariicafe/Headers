@class NSObject, RPCompanionLinkClient;
@protocol COEndpointMonitorDelegate, OS_dispatch_queue;

@interface COEndpointMonitor : NSObject {
    RPCompanionLinkClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _activeEndpointCount;
}

@property (weak) id<COEndpointMonitorDelegate> delegate;

- (void)startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)_activateLink;

@end
