@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal>

@property (copy, nonatomic) id /* block */ invalidationBlock;

+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)sharedEngine;

- (id)_stats_key;
- (void).cxx_destruct;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (void)_internal_stopFeedbackData:(id)a0 forFeedback:(id)a1;
- (void)_playFeedback:(id)a0 atTime:(double)a1;
- (void)_updateValueForParameters:(id)a0 withKey:(id)a1;
- (void)_stopFeedback:(id)a0;
- (BOOL)_internal_playFeedbackData:(id)a0 forFeedback:(id)a1 atTime:(double)a2;

@end
