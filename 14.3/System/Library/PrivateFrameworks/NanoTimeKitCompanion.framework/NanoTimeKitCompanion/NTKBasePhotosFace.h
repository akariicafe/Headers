@interface NTKBasePhotosFace : NTKFace

+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;

- (BOOL)_allowsEditing;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (id)_resourceDirectorySnapshotKey;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;

@end
