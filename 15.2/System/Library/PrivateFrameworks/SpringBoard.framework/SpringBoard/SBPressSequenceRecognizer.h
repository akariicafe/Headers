@class SBPressSequenceValidator, BSTimer, SBPressTuple, NSMutableArray;
@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject {
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
}

@property (weak, nonatomic) id<SBPressSequenceRecognizerDelegate> delegate;
@property (readonly, nonatomic) SBPressSequenceValidator *validator;
@property (readonly, nonatomic) unsigned long long numberOfPresses;

- (void)_reset;
- (void)_complete;
- (void).cxx_destruct;
- (id)init;
- (void)registerPressDownWithTimestamp:(double)a0;
- (void)registerPressUpWithTimestamp:(double)a0;
- (void)resetWithNewValidator:(id)a0 numberOfPresses:(unsigned long long)a1;
- (id)initWithValidator:(id)a0 numberOfPresses:(unsigned long long)a1;
- (void)_handlePressDownWithTimestamp:(double)a0;
- (void)_handlePressUpWithTimestamp:(double)a0;
- (void)_resetAndNotify;
- (void)_resetWatchdogIfNecessary;
- (void)_resetAfterDelay:(double)a0;
- (double)_watchdogTimeIntervalFromDelay:(double)a0;

@end
