@class NSString, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeAppLaunchFeaturizer : NSObject <ATXModeFeaturizer> {
    _PASSimpleCoalescingTimer *_cooldownTimer;
    _PASSimpleCoalescingTimer *_easeInTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property long long state;
@property (nonatomic) BOOL easeInTimerIsEnabled;
@property (nonatomic) BOOL cooldownTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (id)provideFeatures;
- (unsigned long long)expectedGenreId;
- (id)additionalAllowedBundleIds;
- (void)beginListening;
- (void).cxx_destruct;
- (id)init;
- (int)modeFeatureType;
- (id)registrationId;
- (id)_latestAppLaunchBundleId;
- (id)_provideFeaturesWithBundleId:(id)a0;
- (void)_actuallyEndMode;
- (void)_actuallyStartMode;
- (void)_processNewAppLaunchEvent:(id)a0;

@end
