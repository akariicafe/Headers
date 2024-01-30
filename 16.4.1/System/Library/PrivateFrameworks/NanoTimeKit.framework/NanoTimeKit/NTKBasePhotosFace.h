@class NSString;

@interface NTKBasePhotosFace : NTKFace {
    NSString *_cachedResourceDirectorySnapshotKey;
}

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)_allowsEditing;
- (BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)a0 error:(id *)a1;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (void)_migrateLegibility;
- (id)_resourceDirectorySnapshotKey;
- (BOOL)_sanitizeFaceConfiguration:(id *)a0;
- (BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (void)_updateForResourceDirectoryChange:(id)a0;

@end
