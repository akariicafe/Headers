@class SBPressSequenceValidator, SBPressTuple, NSMutableArray, BSAbsoluteMachTimer;
@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject {
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSAbsoluteMachTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
}

@property (weak, nonatomic) id<SBPressSequenceRecognizerDelegate> delegate;
@property (readonly, nonatomic) SBPressSequenceValidator *validator;
@property (readonly, nonatomic) unsigned long long numberOfPresses;

- (void)_reset;
- (void)_complete;
- (void)dealloc;
- (void)_resetWatchdogIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)_resetAndNotify;
- (double)_watchdogTimeIntervalFromDelay:(double)a0;
- (void)registerPressDownWithTimestamp:(double)a0;
- (void)_handlePressDownWithTimestamp:(double)a0;
- (void)_handlePressUpWithTimestamp:(double)a0;
- (void)_resetAfterDelay:(double)a0;
- (id)initWithValidator:(id)a0 numberOfPresses:(unsigned long long)a1;
- (void)registerPressUpWithTimestamp:(double)a0;
- (void)resetWithNewValidator:(id)a0 numberOfPresses:(unsigned long long)a1;

@end
