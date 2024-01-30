@class NSString, NSMutableDictionary, APOdmlXpcLifecycleHandler, APOdmlUnfairLock, NSArray, ADVector;

@interface ADAppUsageVectorManager : NSObject

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) ADVector *appUsageVector;
@property (nonatomic) double vectorWeightTotal;
@property (retain, nonatomic) APOdmlUnfairLock *setVectorAndWeightLock;
@property (retain, nonatomic) NSMutableDictionary *adamIDtoBundleID;
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task;
@property (nonatomic) double lookbackPeriod;
@property (nonatomic) long long maxQueryElements;
@property (nonatomic) double exponentialDecayConstant;
@property (nonatomic) BOOL weightByDuration;
@property (retain, nonatomic) NSArray *appUsageEvents;

- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 lookbackPeriod:(id)a1 maxQueryElements:(id)a2 task:(id)a3 exponentialDecayConstant:(id)a4 weightByDuration:(id)a5;
- (void)updateUsageVectorsWithAppVector:(id)a0;
- (id)normalizedAppUsageVector;
- (id)pullUsageEvents;
- (id)bundleIdForAdamId:(id)a0;
- (double)weightForEvents:(id)a0;
- (id)updateVector:(id)a0 withVector:(id)a1 usingWeight:(double)a2;
- (id)appUsageEventsForLookbackPeriod:(double)a0;
- (void)buildBundleIDtoAdamIDCache:(id)a0;
- (id)appUsageEventsBetween:(id)a0 and:(id)a1 withLimit:(unsigned long long)a2;
- (id)adamIDForBundleID:(id)a0;

@end
