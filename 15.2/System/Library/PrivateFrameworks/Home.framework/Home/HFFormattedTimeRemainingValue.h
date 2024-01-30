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

+ (id)defaultFormatter;
+ (id)valueWithRemainingDuration:(double)a0 relativeToDate:(id)a1;

- (void)_stopTimer;
- (id)initWithFireDate:(id)a0;
- (void).cxx_destruct;
- (double)_timeRemaining;
- (id)initWithFireDate:(id)a0 formatter:(id)a1;
- (id)_generateFormattedValue;
- (void)_updateTimerState;
- (void)countdownTimerDidFire:(id)a0;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)a0;

@end
