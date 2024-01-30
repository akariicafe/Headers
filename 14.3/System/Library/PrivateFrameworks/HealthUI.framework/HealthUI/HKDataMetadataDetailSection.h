@class HKDisplayTypeController, HKDataMetadataDataSource, HKUnitPreferenceController, NSObject;
@protocol HKDataMetadataObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {
    HKDataMetadataDataSource *_metadataDataSource;
}

@property (readonly, nonatomic) NSObject<HKDataMetadataObject> *object;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)initWithWorkoutEvent:(id)a0;
- (id)initWithSample:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;
- (void)_loadMetadataValues;

@end
