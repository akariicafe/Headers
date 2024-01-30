@interface NTKGalleonFace : NTKFace

@property (nonatomic) BOOL compassDefault;

+ (id)_richComplicationSlotsForDevice:(id)a0;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_initialDefaultComplicationForSlot:(id)a0 forDevice:(id)a1;
+ (id)pigmentFaceDomain;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)isRestrictedForDevice:(id)a0;

- (id)_complicationSlotDescriptors;
- (id)faceSharingName;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_faceDescription;
- (id)_faceDescriptionKey;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;

@end
