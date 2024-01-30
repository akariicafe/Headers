@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (void)testCountsUptoYear;
- (id)init;
- (void)testCountsAfterYear;
- (void).cxx_destruct;
- (void)stressTestCounts;
- (void)testCountsUptoMonth;
- (void)testCountsMovingYearInPast;
- (void)fetchBundleRenderAndEngagementInfo;
- (void)testCountsUptoHalfYear;
- (id)getSyntheticTestRankingItem;
- (void)testCountsAfterCoupleYears;
- (void)testCountsUptoWeek;
- (void)_indexItemWithIdentifier:(id)a0 bundleID:(id)a1 startDate:(id)a2 pc:(id)a3;
- (void)testCountsMovingDaysInPast;
- (void)testCountsUptoQuarter;
- (void)testCountsForRegularEngagement;
- (void)fetchBundleRenderAndEngagementInfo:(id)a0;
- (void)resetResultWithRankingItems:(id)a0;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)a0 date:(id)a1 protectionClassMapping:(id)a2;
- (void)writeRenderAndEngagementInfo;
- (void)testForDummyEntry;
- (id)fetchResults;
- (void)testForDurationWithIntervals:(int *)a0 maxIndex:(int)a1 duration:(long long)a2 counts:(id)a3;
- (void)testCountsUptoOneDay;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)didEngageResultWithRankingItem:(id)a0 startDate:(id)a1 protectionClass:(id)a2;
- (id)getSyntheticTestRankingItemsForStressTest;

@end
