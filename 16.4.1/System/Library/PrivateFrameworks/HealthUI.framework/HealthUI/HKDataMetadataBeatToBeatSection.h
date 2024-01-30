@class HKHealthStore, HKSample, HKDisplayTypeController, HKUnitPreferenceController;

@interface HKDataMetadataBeatToBeatSection : HKDataMetadataSection {
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)initWithSample:(id)a0 healthStore:(id)a1 displayTypeController:(id)a2 unitController:(id)a3;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
