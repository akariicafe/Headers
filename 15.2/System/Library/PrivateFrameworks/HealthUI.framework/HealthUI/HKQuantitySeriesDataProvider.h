@class HKUnitPreferenceController, NSString, HKHealthStore, HKDisplayTypeController, HKQuantitySeriesSampleEditor, NSMutableArray, HKQuantitySample;
@protocol HKQuantitySeriesDataProviderDelegate;

@interface HKQuantitySeriesDataProvider : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) HKQuantitySample *parentSample;
@property (retain, nonatomic) NSMutableArray *quantities;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKQuantitySeriesSampleEditor *editor;
@property (nonatomic) BOOL hasSubsamplesToRemove;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) id<HKQuantitySeriesDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)initWithSample:(id)a0 healthStore:(id)a1;
- (id)textForQuantity:(id)a0;
- (void)deleteQuantity:(id)a0;
- (void)queryForSubsamples:(id /* block */)a0;
- (void)commitDeletionsIfNeeded;

@end
