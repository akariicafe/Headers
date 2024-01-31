@class NSString, CHHapticEngine;

@interface VKWalkAssistHapticEngine : NSObject <VKWalkAssistHapticEngineDelegate>

@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property BOOL hapticEngineStarted;
@property (nonatomic) BOOL usesHapticFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)playEnterHaptic;
- (void)_playHapticFromHapticPattern:(id)a0;
- (id)enterPattern;
- (id)exitPattern;
- (void)playExitHaptic;
- (void)playSingleHapticPulseWithIntensity:(float)a0 duration:(double)a1;
- (id)singlePulsePatternWithIntensity:(float)a0 duration:(double)a1;

@end
