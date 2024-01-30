@class SBPressTuple, BSAbsoluteMachTimer, NSMutableArray;
@protocol SBPressCollectorDelegate;

@interface SBPressCollector : NSObject {
    BSAbsoluteMachTimer *_hardEndTimer;
    NSMutableArray *_currentSequence;
    SBPressTuple *_currentTuple;
    double _lastHandledDownEvent;
    double _lastHandledUpEvent;
}

@property (weak, nonatomic) id<SBPressCollectorDelegate> delegate;
@property (nonatomic) double maxPressDownDuration;
@property (nonatomic) double maxPressUpDuration;

+ (double)currentTimeStamp;

- (void)_reset;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_end;
- (void)registerPressDownWithTimeStamp:(double)a0;
- (void)_fireEndTimerWithDelay:(double)a0 isButtonDown:(BOOL)a1;
- (void)_handlePressDownWithTimeStamp:(double)a0;
- (void)_handlePressUpWithTimeStamp:(double)a0;
- (void)_resetTimersIfNecessary;
- (void)endCurrentSequence;
- (void)registerPressUpWithTimeStamp:(double)a0;

@end
