@interface NTKBasePhotoFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;

- (BOOL)_allowsEditing;
- (id)_localizedNameForComplicationSlot:(id)a0;

@end
