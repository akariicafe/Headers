@class NSMutableDictionary, AVTAvatarColorVariationStore;

@interface AVTAvatarEditorColorsState : NSObject

@property (retain, nonatomic) NSMutableDictionary *colorStorage;
@property (readonly, nonatomic) AVTAvatarColorVariationStore *variationStore;

- (void).cxx_destruct;
- (id)initWithVariationStore:(id)a0;
- (id)selectedColorForCategory:(long long)a0 destinationIndex:(long long)a1;
- (id)selectedColorPresetForCategory:(long long)a0 destinationIndex:(long long)a1;
- (void)setSelectedColorPreset:(id)a0 forCoreModelColor:(id)a1;
- (id)storageForCategory:(long long)a0;

@end
