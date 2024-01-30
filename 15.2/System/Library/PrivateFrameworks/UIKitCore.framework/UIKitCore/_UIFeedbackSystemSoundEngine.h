@class NSCountedSet;

@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal>

@property (readonly, nonatomic) NSCountedSet *suspendedSSIDs;
@property (readonly, nonatomic) NSCountedSet *warmSSIDs;
@property (copy, nonatomic) id /* block */ invalidationBlock;

+ (id)sharedEngine;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)_internalQueue;

- (id)_stats_key;
- (void)_internal_stopWarmingFeedbacks:(id)a0;
- (void)_internal_performForEachSSIDsInFeedbacks:(id)a0 block:(id /* block */)a1;
- (void)_stopFeedback:(id)a0;
- (BOOL)_internal_prepareSystemSoundID:(unsigned int)a0 forBeingActive:(BOOL)a1;
- (void)_internal_playFeedbackDataNow:(id)a0 forFeedback:(id)a1 withOptions:(id)a2;
- (void)_internal_startWarmingFeedbacks:(id)a0;
- (void)_updateValueForParameters:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (void)_internal_stopFeedbackData:(id)a0 forFeedback:(id)a1;
- (void)_playFeedback:(id)a0 atTime:(double)a1;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (BOOL)_internal_playFeedbackData:(id)a0 forFeedback:(id)a1 atTime:(double)a2;
- (void)_internal_updateSuspension;

@end
