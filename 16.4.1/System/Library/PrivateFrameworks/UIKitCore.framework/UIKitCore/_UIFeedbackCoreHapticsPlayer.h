@class NSObject, _UIFeedbackCoreHapticsEngine;
@protocol OS_dispatch_queue, CHHapticPatternPlayer;

@interface _UIFeedbackCoreHapticsPlayer : NSObject <_UIFeedbackPlayer_Internal> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (weak, nonatomic) _UIFeedbackCoreHapticsEngine *hapticEngine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> coreHapticsPlayer;
@property (copy, nonatomic) id /* block */ invalidationBlock;

- (void)_internal_stopFeedbackData:(id)a0 forFeedback:(id)a1;
- (void)_playFeedback:(id)a0 atTime:(double)a1;
- (id)initWithEngine:(id)a0;
- (void)_updateValueForParameters:(id)a0 withKey:(id)a1;
- (BOOL)_internal_playFeedbackData:(id)a0 forFeedback:(id)a1 atTime:(double)a2;
- (void).cxx_destruct;
- (void)_stopFeedback:(id)a0;
- (id)_internal_createEventsForFeedbackData:(id)a0 engine:(id)a1 parameters:(id *)a2 parameterCurves:(id *)a3;
- (id)_internal_createEventsForFileFeedbackData:(id)a0 engine:(id)a1 parameters:(id *)a2 parameterCurves:(id *)a3;
- (id)_internal_createEventsForLegacyFeedbackData:(id)a0;
- (id)_internal_createEventsForTransientHapticData:(id)a0;
- (id)_internal_createFixedParameterForParameters:(id)a0 withKey:(id)a1 forEventType:(id)a2;
- (id)_internal_createPatternForFeedbackData:(id)a0 feedback:(id)a1 engine:(id)a2;
- (id)_internal_createPlayerWithPattern:(id)a0;
- (void)_internal_updateValueForParameters:(id)a0 withKey:(id)a1;

@end
