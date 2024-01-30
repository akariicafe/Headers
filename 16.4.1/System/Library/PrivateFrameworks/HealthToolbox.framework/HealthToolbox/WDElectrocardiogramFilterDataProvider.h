@class WDProfile, NSArray, NSMutableDictionary, NSString, NSObject;
@protocol WDElectrocardiogramFilterDataProviderDelegate, OS_dispatch_queue;

@interface WDElectrocardiogramFilterDataProvider : NSObject <HKSampleTypeUpdateControllerObserver>

@property (weak, nonatomic) WDProfile *profile;
@property (weak, nonatomic) id<WDElectrocardiogramFilterDataProviderDelegate> delegate;
@property (nonatomic) long long activeAlgorithmVersion;
@property (retain, nonatomic) NSArray *filterTypes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSMutableDictionary *counts;
@property (retain, nonatomic) NSArray *countQueries;
@property (readonly, nonatomic) long long filterTypeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_atrialFibrillationClassificationPredicateWithClassifications:(id)a0;
+ (id)_atrialFibrillationClassificationPredicateWithValue:(unsigned long long)a0;
+ (id)_atrialFibrillationClassificationPredicateWithValues:(id)a0;
+ (id)cellTitleForType:(long long)a0;
+ (id)viewControllerTitleForType:(long long)a0;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;
- (void)_stopQueries;
- (id)_atrialFibrillationClassificationsWithActiveAlgorithmVersion:(long long)a0;
- (id)_countQueriesForFilterTypes:(id)a0;
- (id)_countQueryForType:(long long)a0;
- (id)_filterTypesForActiveAlgorithmVersion:(long long)a0;
- (id)_highLowHeartRateClassificationsWithActiveAlgorithmVersion:(long long)a0;
- (id)_inconclusiveClassificationsWithActiveAlgorithmVersion:(long long)a0;
- (long long)_rQueue_countForType:(long long)a0;
- (void)_rQueue_notifyDelegateDidUpdateCountForType:(long long)a0;
- (void)_rQueue_setCount:(long long)a0 forType:(long long)a1;
- (void)_safelyStopQuery:(id)a0;
- (long long)countForType:(long long)a0;
- (id)displayStringCountForType:(long long)a0;
- (id)electrocardiogramPredicateForType:(long long)a0;

@end
