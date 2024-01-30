@interface NTKPrideDigitalFace : NTKFace

+ (id)releaseDate;
+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)isRestrictedForDevice:(id)a0;
+ (BOOL)isAvailableForDevice:(id)a0;
+ (id)_debugReleaseDate;
+ (BOOL)_wasAvailable;
+ (void)_setWasAvailable;
+ (unsigned long long)enabledState;
+ (void)setEnabledState:(unsigned long long)a0;
+ (BOOL)releaseImminent;
+ (void)callBlockWhenFaceBecomesAvailable:(id /* block */)a0;

- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (BOOL)_hasOptionsForCustomEditMode:(long long)a0;
- (long long)_customEditModeForUniqueConfiguration;

@end
