@class HKSample, NSString;
@protocol HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection <HKQuantitySeriesDataProviderDelegate>

@property (retain) HKSample *sample;
@property (weak, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;
@property (copy) id /* block */ reloadMetaDataVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)initWithSample:(id)a0 delegate:(id)a1;
- (void)reloadSampleData;
- (void)sampleDidChange:(id)a0;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
