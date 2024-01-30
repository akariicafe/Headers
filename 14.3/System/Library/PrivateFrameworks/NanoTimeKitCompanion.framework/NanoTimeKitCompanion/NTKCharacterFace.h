@class NSMutableDictionary;

@interface NTKCharacterFace : NTKFace {
    NSMutableDictionary *_previousCharacterColors;
}

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_orderedComplicationSlots;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)_defaultName;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (long long)_customEditModeForUniqueConfiguration;
- (void)_noteOptionChangedFrom:(id)a0 to:(id)a1 forCustomEditMode:(long long)a2 slot:(id)a3;
- (long long)_editModeForOldEncodingIndex:(long long)a0;
- (unsigned long long)_selectedCharacter;
- (id)_faceDescriptionKey;

@end
