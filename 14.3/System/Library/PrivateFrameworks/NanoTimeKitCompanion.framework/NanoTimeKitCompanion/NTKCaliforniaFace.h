@class NSString;

@interface NTKCaliforniaFace : NTKFace <NTKFaceComplicationPreviewable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)complicationConfiguration;

- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)complicationSlotsHiddenByEditOption:(id)a0;
- (void)setIsLibraryFace:(BOOL)a0;
- (void)applyPreviewConfigurationWithFamily:(long long)a0 faceColor:(long long)a1;
- (BOOL)isFullscreenConfiguration;
- (id)defaultColorForDevice:(id)a0;

@end
