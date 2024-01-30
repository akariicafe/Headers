@class AVTPreset, NSString, NSDictionary;

@interface AVTPresetDependency : NSObject {
    float _morphVariantIntensity;
    long long _category;
    AVTPreset *_preset;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    NSDictionary *_visibilityRules;
}

- (id)description;
- (void).cxx_destruct;

@end
