@interface NTKPhotosFace : NTKBasePhotosFace {
    BOOL _editing;
}

+ (id)pigmentFaceDomain;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (BOOL)_customEditMode:(long long)a0 hasActionForOption:(id)a1 forDevice:(id)a2;
+ (BOOL)_customEditModeIsRows:(long long)a0 forDevice:(id)a1;
+ (id)sortableFaceWithAssets:(id)a0;
+ (BOOL)supportsExternalAssets;

- (void)_cleanupEditOptions;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_hasOptionsForCustomEditMode:(long long)a0;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedStringForExternal:(id)a0 comment:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (void)_prepareEditOptions;
- (id)addFaceDetailViewController;
- (void)companionEditorWithAssets:(id)a0 completion:(id /* block */)a1;
- (id)libraryDetailViewController;
- (BOOL)requiresPigmentEditOption;

@end
