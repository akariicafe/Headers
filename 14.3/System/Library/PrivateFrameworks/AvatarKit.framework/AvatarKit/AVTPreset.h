@class NSString, NSDictionary, NSArray;

@interface AVTPreset : NSObject {
    long long _category;
    NSString *_identifier;
    NSArray *_assets;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    float _morphVariantIntensity;
    float _textureAssetPresence;
    BOOL _mirrored;
    NSArray *_dependencies;
    NSDictionary *_assetSpecificMorphVariantDependencies;
    NSDictionary *_assetSpecificImageVariantDependencies;
    NSDictionary *_assetSpecificMaterialVariantDependencies;
    NSDictionary *_presetSpecificPresetDependencies;
}

@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayableName;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSDictionary *tags;
@property (readonly) NSDictionary *specializationSettings;

+ (id)colorPresetsForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)presetWithCategory:(long long)a0 identifier:(id)a1;
+ (id)availablePresetsForCategory:(long long)a0;
+ (id)findPresetWithIdentifier:(id)a0 inPresets:(id)a1;
+ (void)loadPresets;
+ (id)_colorPresetsForCategory:(long long)a0 palette:(id)a1;
+ (id)colorPresetsForCategory:(long long)a0;
+ (id)secondaryColorPresetsForCategory:(long long)a0;

- (id)cache;
- (void).cxx_destruct;
- (id)assets;
- (id)colorPresets;
- (id)description;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)a0 block:(id /* block */)a1;
- (void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)a0 block:(id /* block */)a1;
- (void)rebuildSpecializationSettings;
- (void)enumeratePresetDependencies:(id /* block */)a0;
- (void)enumeratePresetSpecificPresetDependencies:(id /* block */)a0;
- (void)applyPresetByChangingComponentsOfMemoji:(id)a0;

@end
