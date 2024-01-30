@class NSString, CMAnomalyEvent, NSObject, CMFallDetectionClient;
@protocol CMFallDetectionManagerInternalDelegate, OS_dispatch_queue;

@interface CMFallDetectionManagerInternal : NSObject <CMFallDetectionClientXPC> {
    void *_locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _fallDetectionNotificationToken;
    CMFallDetectionClient *_fallDetectionClient;
}

@property (copy, nonatomic) id /* block */ newtonPromptHandler;
@property (retain, nonatomic) CMAnomalyEvent *mostRecentEvent;
@property (weak, nonatomic) id<CMFallDetectionManagerInternalDelegate> delegate;
@property (readonly, nonatomic) BOOL fallDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_responseDictionaryWithMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_appDidBecomeActive:(id)a0;
- (void)_configureLocationClientIfNeeded;
- (void)_handleAnomalyEventCompletedMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)_invalidateLocationClient;
- (void)_subscribeToCompletedFallEvents;
- (void)_fetchMostRecentFallEvent;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;
- (void)_requestTCCWithCompletion:(id /* block */)a0;
- (void)_appDelegateDidFinishProcessingWithDuration:(double)a0;
- (void)_requestNewtonPromptWithCompletion:(id /* block */)a0;

@end
