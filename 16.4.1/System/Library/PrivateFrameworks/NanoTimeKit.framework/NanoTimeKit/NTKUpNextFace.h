@interface NTKUpNextFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)pigmentFaceDomain;
+ (id)_orderedComplicationSlots;
+ (Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)a0;

- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_hasOptionsForCustomEditMode:(long long)a0;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (BOOL)requiresPigmentEditOption;

@end
