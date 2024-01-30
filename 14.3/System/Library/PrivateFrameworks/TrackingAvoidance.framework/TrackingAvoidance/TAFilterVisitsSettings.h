@class NSSet;

@interface TAFilterVisitsSettings : NSObject

@property (readonly, nonatomic) double maxSuspiciousDuration;
@property (readonly, nonatomic) double minInterVisitDistance;
@property (readonly, nonatomic) unsigned long long minNSigmaBetweenVisits;
@property (readonly, nonatomic) double entryDisplayOnBudget;
@property (readonly, nonatomic) double exitDisplayOnBudget;
@property (readonly, nonatomic) NSSet *sensitiveLOITypes;
@property (readonly, nonatomic) double minObservationInterval;

+ (BOOL)_isLegacyHardware;
+ (double)_determinDefaultEntryDisplayOnBudget;
+ (id)defaultVisitsSensitiveLOITypes;
+ (double)_determinDefaultExitDisplayOnBudget;

- (void).cxx_destruct;
- (id)initWithMaxSuspiciousDuration:(double)a0 minInterVisitDistance:(double)a1 minNSigmaBetweenVisits:(unsigned long long)a2 entryDisplayOnBudget:(double)a3 exitDisplayOnBudget:(double)a4 sensitiveLOITypes:(id)a5 minObservationInterval:(double)a6;
- (id)sensitiveLOITypesToString;
- (id)initWithDefaults;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)a0 minInterVisitDistanceOrDefault:(id)a1 minNSigmaBetweenVisitsOrDefault:(id)a2 entryDisplayOnBudgetOrDefault:(id)a3 exitDisplayOnBudgetOrDefault:(id)a4 sensitiveLOITypesOrDefault:(id)a5 minObservationIntervalOrDefault:(id)a6;

@end
