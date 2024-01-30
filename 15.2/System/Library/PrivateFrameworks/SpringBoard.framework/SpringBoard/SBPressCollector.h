@class BSTimer, NSMutableArray, SBPressTuple;
@protocol SBPressCollectorDelegate;

@interface SBPressCollector : NSObject {
    BSTimer *_hardEndTimer;
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
- (void)_end;
- (void).cxx_destruct;
- (id)init;
- (void)registerPressDownWithTimeStamp:(double)a0;
- (void)registerPressUpWithTimeStamp:(double)a0;
- (void)_resetTimersIfNecessary;
- (void)_handlePressUpWithTimeStamp:(double)a0;
- (void)_handlePressDownWithTimeStamp:(double)a0;
- (void)_fireEndTimerWithDelay:(double)a0 isButtonDown:(BOOL)a1;
- (void)endCurrentSequence;

@end
