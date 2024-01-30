@class NSString, AVTColorPreset;

@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
    NSString *_presetIdentifiers[36];
    AVTColorPreset *_colorPresets[36][3];
}

+ (BOOL)supportsSecureCoding;
+ (unsigned char)classIdentifier;
+ (id)colorPresetFromColorData:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2 version:(unsigned short)a3;
+ (id)presetsDictionaryFromRecipe:(id)a0;
+ (id)randomDescriptor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)colorPresetForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
- (void)setColorPreset:(id)a0 forCategory:(long long)a1 colorIndex:(unsigned long long)a2;
- (id)initWithMemoji:(id)a0;
- (void)_decode:(id)a0 isResettingToDefault:(BOOL)a1;
- (void)applyToMemoji:(id)a0;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1 isResettingToDefault:(BOOL)a2;
- (id)presetIdentifierForCategory:(long long)a0;
- (void)setPresetIdentifier:(id)a0 forCategory:(long long)a1;

@end
