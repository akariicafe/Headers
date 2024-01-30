@class NSString, NSObject;
@protocol OS_dispatch_queue, FCBackgroundTaskable;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {
    id<FCBackgroundTaskable> _backgroundTaskable;
    BOOL _inBackground;
    NSObject<OS_dispatch_queue> *_pendingQueue;
    id /* block */ _pendingHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activityObservingApplicationWillTerminate;
- (id)initWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;
- (void)_saveIfNeeded;
- (void).cxx_destruct;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationDidEnterBackground;

@end
