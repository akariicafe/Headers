@class NSMapTable, NSString, NSDate, NSDateComponentsFormatter;
@protocol HFStringGenerator;

@interface HFFormattedTimeRemainingValue : NSObject <HFSynchronizedTimerObserver, HFDynamicFormattingValue>

@property (readonly, nonatomic) NSMapTable *observationBlocks;
@property (retain, nonatomic) id<HFStringGenerator> currentFormattedValue;
@property (readonly, nonatomic) NSDate *value;
@property (readonly, nonatomic) NSDateComponentsFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueWithRemainingDuration:(double)a0 relativeToDate:(id)a1;
+ (id)defaultFormatter;

- (void).cxx_destruct;
- (id)initWithFireDate:(id)a0 formatter:(id)a1;
- (id)_generateFormattedValue;
- (void)_updateTimerState;
- (void)countdownTimerDidFire:(id)a0;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)a0;
- (id)initWithFireDate:(id)a0;
- (void)_stopTimer;
- (double)_timeRemaining;

@end
