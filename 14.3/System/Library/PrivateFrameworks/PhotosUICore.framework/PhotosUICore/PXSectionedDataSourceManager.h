@class PXSectionedDataSource, PXSectionedChangeDetailsRepository, NSMutableArray;

@interface PXSectionedDataSourceManager : PXObservable {
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
}

@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory;

- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)changeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)setDataSource:(id)a0 changeDetailsArray:(id)a1;
- (id)allChangeDetailsFromDataSource:(id)a0 toDataSource:(id)a1;
- (void)waitForCondition:(id /* block */)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)_reevaluateWaitingConditions;
- (void)_waitingConditionDidTimeout:(id)a0;
- (id)queryObserversInterestingObjectReferences;
- (void)didPublishChanges;
- (id)mutableChangeObject;
- (void)_setDataSource:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;

@end
