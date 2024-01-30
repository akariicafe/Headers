@class SUScriptSubscriptionStatusResponse, ICMusicSubscriptionStatusMonitor, NSObject;
@protocol OS_dispatch_queue, NSCopying;

@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SUScriptSubscriptionStatusResponse *_lastKnownSubscriptionStatusResponse;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> _subscriptionStatusMonitorObservationToken;
}

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateWithSubscriptionStatus:(id)a0;

@end
