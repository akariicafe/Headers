@class NTPBTodayResultOperationFetchInfo, NSDictionary, NTCatchUpOperationForYouFetchInfo, NSDate, NTTodayResults, NTPBTodayConfig;

@interface NTNewsTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NTPBTodayConfig *todayConfig;
@property (copy, nonatomic) NSDate *filterDate;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic) double resultHeadlineScaleFactor;
@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

+ (void)initialize;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_firstRefreshDateDefaultsKey;
- (id)_sectionCTRsWithTodayConfig:(id)a0 personalizationTreatment:(id)a1 aggregateStore:(id)a2;
- (void)_fetchTodayResultsWithFetchHelper:(id)a0 aggregator:(id)a1 budgetInfo:(id)a2 appConfiguration:(id)a3 feedPersonalizer:(id)a4 todayData:(id)a5 completion:(id /* block */)a6;
- (void)_assembleQueueDescriptorsWithConfig:(id)a0 allowOnlyWatchEligibleSections:(BOOL)a1 respectsWidgetVisibleSectionsLimit:(BOOL)a2 personalizationTreatment:(id)a3 aggregateStore:(id)a4 appConfiguration:(id)a5 todayData:(id)a6 completion:(id /* block */)a7;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)a0;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)a0 catchUpOperationResultsBySectionDescriptor:(id)a1 slotAllocationByDynamicSlotItemID:(id)a2 appConfiguration:(id)a3 feedPersonalizer:(id)a4 todayData:(id)a5 completion:(id /* block */)a6;

@end
