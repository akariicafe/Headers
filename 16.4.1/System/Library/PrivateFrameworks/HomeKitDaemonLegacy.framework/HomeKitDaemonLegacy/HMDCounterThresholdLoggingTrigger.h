@class NSString;
@protocol HMDEWSLogging;

@interface HMDCounterThresholdLoggingTrigger : NSObject <HMDEventCounterObserver>

@property (readonly, nonatomic) unsigned long long threshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;
@property (readonly, nonatomic) id<HMDEWSLogging> ewsLogger;

- (void).cxx_destruct;
- (id)initWithThreshold:(unsigned long long)a0 counterName:(id)a1 ewsLogger:(id)a2;
- (id)initWithThreshold:(unsigned long long)a0 counterName:(id)a1 uploadImmediately:(BOOL)a2 ewsLogger:(id)a3;
- (void)logThresholdTrigger:(id)a0 triggerValue:(unsigned long long)a1;
- (void)updatedCounterForEventName:(id)a0 fromOldValue:(unsigned long long)a1 toNewValue:(unsigned long long)a2;

@end
