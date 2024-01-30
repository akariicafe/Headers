@class SUScriptSubscriptionStatusResponse, ICMusicSubscriptionStatusMonitor, NSObject;
@protocol OS_dispatch_queue, NSCopying;

@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SUScriptSubscriptionStatusResponse *_lastKnownSubscriptionStatusResponse;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> _subscriptionStatusMonitorObservationToken;
}

+ (id)sharedObserver;

- (void)dealloc;
- (id)init;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void).cxx_destruct;

@end
