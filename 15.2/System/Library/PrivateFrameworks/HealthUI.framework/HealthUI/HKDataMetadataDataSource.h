@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider> {
    HKSample *_sample;
    HKUnitPreferenceController *_unitPreferenceController;
}

- (void).cxx_destruct;
- (id)initWithSample:(id)a0 unitPreferenceController:(id)a1;
- (void)addDetailValuesToSection:(id)a0;
- (id)_mediaSourceDisplayNamesForSample:(id)a0;
- (id)_formattedValueTextForVO2MaxQuantityObject:(id)a0 key:(id)a1 section:(id)a2;
- (void)addAdditionalDetailValuesToSection:(id)a0 key:(id)a1 value:(id)a2;

@end
