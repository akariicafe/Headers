@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider> {
    HKSample *_sample;
    HKUnitPreferenceController *_unitPreferenceController;
}

- (void).cxx_destruct;
- (id)_formattedValueTextForVO2MaxQuantityObject:(id)a0 key:(id)a1 section:(id)a2;
- (id)_mediaSourceDisplayNamesForSample:(id)a0;
- (void)addAdditionalDetailValuesToSection:(id)a0 key:(id)a1 value:(id)a2;
- (void)addDetailValuesToSection:(id)a0;
- (id)initWithSample:(id)a0 unitPreferenceController:(id)a1;

@end
