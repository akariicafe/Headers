@interface NTKKaleidoscopeFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditMode:(long long)a0 hasActionForOption:(id)a1 forDevice:(id)a2;

- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)editOptionThatHidesAllComplications;
- (void)_updateForResourceDirectoryChange:(id)a0;
- (BOOL)isUsingCustomAsset;
- (id)_resourceDirectorySnapshotKey;
- (Class)_optionClassForCustomEditMode:(long long)a0 resourceDirectoryExists:(BOOL)a1;
- (BOOL)_shouldIncludeResourceDirectoryForSharing;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;

@end
