@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;
@property (retain) NSObject<OS_dispatch_queue> *fetchQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (void)testCountsMovingCoupleOfYearsInPast;
- (void)fetchBundleRenderAndEngagementInfo:(id)a0;
- (void)testCountsUptoHalfYear;
- (void)writeRenderAndEngagementInfo;
- (void)testForDummyEntry;
- (void)fetchBundleRenderAndEngagementInfo;
- (void)testCountsAfterYear;
- (void)_indexItemWithIdentifier:(id)a0 bundleID:(id)a1 startDate:(id)a2 pc:(id)a3;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)a0 date:(id)a1 protectionClassMapping:(id)a2;
- (void)testCountsUptoYear;
- (id)fetchResults;
- (void)testCountsMovingDaysInPast;
- (void)testForDurationWithIntervals:(int *)a0 maxIndex:(int)a1 duration:(long long)a2 counts:(id)a3;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoWeek;
- (void)testCountsUptoMonth;
- (void)testCountsMovingYearInPast;
- (id)getSyntheticTestRankingItemsForStressTest;
- (id)init;
- (void)didEngageResultWithRankingItem:(id)a0 startDate:(id)a1 protectionClass:(id)a2;
- (void)testCountsForRegularEngagement;
- (void)testCountsAfterCoupleYears;
- (id)getSyntheticTestRankingItem;
- (void)resetResultWithRankingItems:(id)a0;
- (void)testCountsUptoOneDay;
- (void)stressTestCounts;
- (void).cxx_destruct;

@end
