@class SUScriptSubscriptionStatusResponse, ICMusicSubscriptionStatusMonitor, NSObject;
@protocol OS_dispatch_queue, NSCopying;

@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SUScriptSubscriptionStatusResponse *_lastKnownSubscriptionStatusResponse;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> _subscriptionStatusMonitorObservationToken;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)init;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void)dealloc;

@end
