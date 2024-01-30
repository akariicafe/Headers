@class NSString, NTKPigmentEditOptionProvider;

@interface NTKWhistlerSubdialsFace : NTKFace <NTKFaceComplicationPreviewable> {
    NTKPigmentEditOptionProvider *_pigmentEditOptionProvider;
    BOOL _isGossamerPigmentEditOptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_richComplicationSlotsForDevice:(id)a0;
+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_initialDefaultComplicationForSlot:(id)a0 forDevice:(id)a1;
+ (id)pigmentFaceDomain;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)_customEditModes;
- (id)_defaultBackgroundOption;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (void)applyPreviewConfigurationWithFamily:(long long)a0 faceColor:(long long)a1;
- (id)pigmentOptionProvider;
- (BOOL)requiresPigmentEditOption;

@end
