@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {
    NSMutableDictionary *_presetsByFamily;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)presetsForFamily:(id)a0;
- (id)presetForUniqueIdentifier:(id)a0;
- (id)defaultPresetsForFamily:(id)a0;
- (id)_presetsByNameForFamily:(id)a0;
- (id)_defaultPresetsByName;
- (id)presetWithUniqueIdentifier:(id)a0;
- (id)defaultPresets;

@end
