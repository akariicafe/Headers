@class UIDelayedAction;

@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol>

@property (nonatomic) BOOL isUserTyping;
@property (nonatomic) float cadence;
@property (nonatomic) float confidence;
@property (nonatomic) float typingAvg;
@property (nonatomic) double gapAvg;
@property (nonatomic) double prevTouchDown;
@property (nonatomic) int touchCount;
@property (retain, nonatomic) UIDelayedAction *touchLogTimer;

- (void).cxx_destruct;
- (void)logUserTyping:(id)a0;
- (id)init;
- (void)typingCadence:(double)a0;
- (void)updateConfidenceWithGap:(double)a0;
- (id)recognizer:(id)a0 confidenceWhenPendingTouchInfo:(id)a1;
- (id)recognizer:(id)a0 confidenceWhenSettingTouchInfo:(id)a1;
- (void)reset;
- (void)addTypingTouchTime:(double)a0;

@end
