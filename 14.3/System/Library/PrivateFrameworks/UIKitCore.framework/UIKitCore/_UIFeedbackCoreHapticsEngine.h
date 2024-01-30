@class NSMutableSet, CHHapticEngine;

@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine {
    NSMutableSet *_playersInUse;
    NSMutableSet *_playersToInvalidate;
}

@property (readonly, nonatomic) CHHapticEngine *coreHapticsEngine;

+ (void)_setHapticEngineCreationBlock:(id /* block */)a0;
+ (void)_setHapticPatternClass:(Class)a0;
+ (id)_internalQueue;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)sharedEngine;
+ (BOOL)_supportsPlayingFeedbackPatternsDirectly;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0 allowsIgnoreCapture:(BOOL)a1;
+ (void)_loadHapticEngineClass;
+ (BOOL)_supportsAbortingDeactivation;

- (id)_stats_key;
- (id)init;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void)_internal_coreHapticsEngineFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (void)_resetCoreHapticsEngine;
- (void)_internal_resetCoreHapticsEngine;
- (void)_internal_coreHapticsEngineStoppedForReason:(long long)a0;
- (void)_coreHapticsEngineStoppedForReason:(long long)a0;
- (id)_internal_createCoreHapticsEngine;
- (BOOL)_internal_initializeCoreHapticsEngine;
- (void)_internal_startRunningFeedbackPlayerWithCompletion:(id /* block */)a0;

@end
