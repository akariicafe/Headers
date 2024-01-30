@class NSMutableSet, CHHapticEngine;

@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine {
    NSMutableSet *_playersInUse;
    NSMutableSet *_playersToInvalidate;
}

@property (readonly, nonatomic, getter=_usesFullGamut) BOOL usesFullGamut;
@property (readonly, nonatomic) CHHapticEngine *coreHapticsEngine;

+ (id)sharedEngine;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0 allowsIgnoreCapture:(BOOL)a1 isFullGamutEngine:(BOOL)a2;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (void)_setHapticPatternClass:(Class)a0;
+ (void)_setHapticEngineCreationBlock:(id /* block */)a0;
+ (BOOL)_supportsPlayingFeedbackPatternsDirectly;
+ (id)_internalQueue;
+ (void)_loadHapticEngineClass;
+ (BOOL)_supportsAbortingDeactivation;

- (id)_stats_key;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void)_internal_coreHapticsEngineFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (void)_resetCoreHapticsEngine;
- (void)_internal_resetCoreHapticsEngine;
- (void)_internal_coreHapticsEngineStoppedForReason:(long long)a0;
- (void)_coreHapticsEngineStoppedForReason:(long long)a0;
- (id)_internal_createCoreHapticsEngine;
- (BOOL)_internal_initializeCoreHapticsEngine;
- (void)_internal_startRunningFeedbackPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)a0;

@end
