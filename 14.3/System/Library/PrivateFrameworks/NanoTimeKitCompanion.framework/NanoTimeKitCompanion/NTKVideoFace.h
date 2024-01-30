@interface NTKVideoFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_dateComplicationSlotForDevice:(id)a0;
+ (unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)a0;

- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)a0;
- (id)_faceDescriptionKey;

@end
