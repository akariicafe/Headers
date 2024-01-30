@class PXSectionedDataSource, PXSectionedChangeDetailsRepository, NSMutableArray;

@interface PXSectionedDataSourceManager : PXObservable <PXMutableSectionedDataSourceManager> {
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
}

@property (readonly, nonatomic) PXSectionedDataSource *dataSourceIfExists;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory;

- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (id)createInitialDataSource;
- (void)_setDataSource:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)setDataSource:(id)a0 changeDetailsArray:(id)a1;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)didPublishChanges;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)_reevaluateWaitingConditions;
- (void)_waitingConditionDidTimeout:(id)a0;
- (id)allChangeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (id)changeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)didCreateInitialDataSource;
- (id)queryObserversInterestingObjectReferences;
- (void)waitForCondition:(id /* block */)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
