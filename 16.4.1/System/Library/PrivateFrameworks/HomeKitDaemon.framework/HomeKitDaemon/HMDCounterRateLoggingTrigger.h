@class NSString;
@protocol HMDEWSLogging;

@interface HMDCounterRateLoggingTrigger : NSObject <HMDEventCounterObserver>

@property (readonly, nonatomic) unsigned long long windowSize;
@property (readonly, nonatomic) unsigned long long windowThreshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) id<HMDEWSLogging> ewsLogger;
@property (readonly, nonatomic) unsigned long long intervalSize;
@property (nonatomic) unsigned long long *intervalCounts;
@property (nonatomic) unsigned long long windowCount;
@property (nonatomic) unsigned long long maxWindowCount;
@property (nonatomic) unsigned long long lastUpdatedInterval;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2 ewsLogger:(id)a3;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3 ewsLogger:(id)a4;
- (id)initWithThreshold:(unsigned long long)a0 windowSize:(unsigned long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3 ewsLogger:(id)a4 timeSourceBlock:(id /* block */)a5;
- (void)logRateTrigger:(id)a0 triggerValue:(unsigned long long)a1;
- (void)updatedCounterForEventName:(id)a0 fromOldValue:(unsigned long long)a1 toNewValue:(unsigned long long)a2;

@end
