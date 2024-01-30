@class NSString;

@interface NTKExtraLargeFace : NTKFace <NTKFaceComplicationPreviewable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_richComplicationSlotsForDevice:(id)a0;

- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (BOOL)_snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (void)applyPreviewConfigurationWithFamily:(long long)a0 faceColor:(long long)a1;
- (BOOL)_complication:(id)a0 appearsInDailySnapshotForSlot:(id)a1;
- (long long)_editModeForOldEncodingIndex:(long long)a0;

@end
