@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject {
    long long _category;
    AVTPreset *_preset;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
