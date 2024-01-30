@class NSString, AVTColorPreset;

@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
    NSString *_presetIdentifiers[36];
    AVTColorPreset *_colorPresets[36][3];
}

+ (unsigned char)classIdentifier;
+ (id)presetsDictionaryFromRecipe:(id)a0;
+ (id)colorPresetFromColorData:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2 version:(unsigned short)a3;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorPresetForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
- (void)setColorPreset:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)initWithMemoji:(id)a0;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1 isResettingToDefault:(BOOL)a2;
- (void)_decode:(id)a0 isResettingToDefault:(BOOL)a1;
- (id)presetIdentifierForCategory:(long long)a0;
- (void)setPresetIdentifier:(id)a0 forCategory:(long long)a1;
- (void)applyToMemoji:(id)a0;

@end
