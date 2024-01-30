@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (void)testCountsUptoMonth;
- (void)writeRenderAndEngagementInfo;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoYear;
- (void)didEngageResultWithRankingItem:(id)a0 startDate:(id)a1 protectionClass:(id)a2;
- (void)testCountsForRegularEngagement;
- (id)getSyntheticTestRankingItemsForStressTest;
- (void)resetResultWithRankingItems:(id)a0;
- (id)getSyntheticTestRankingItem;
- (void).cxx_destruct;
- (void)stressTestCounts;
- (id)init;
- (void)testCountsAfterYear;
- (void)testCountsUptoOneDay;
- (void)fetchBundleRenderAndEngagementInfo;
- (void)_indexItemWithIdentifier:(id)a0 bundleID:(id)a1 startDate:(id)a2 pc:(id)a3;
- (void)testForDurationWithIntervals:(int *)a0 maxIndex:(int)a1 duration:(long long)a2 counts:(id)a3;
- (void)testCountsUptoHalfYear;
- (void)testCountsAfterCoupleYears;
- (void)testCountsMovingDaysInPast;
- (void)fetchBundleRenderAndEngagementInfo:(id)a0;
- (void)testCountsMovingYearInPast;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)testCountsUptoWeek;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)a0 date:(id)a1 protectionClassMapping:(id)a2;
- (void)testForDummyEntry;
- (id)fetchResults;

@end
