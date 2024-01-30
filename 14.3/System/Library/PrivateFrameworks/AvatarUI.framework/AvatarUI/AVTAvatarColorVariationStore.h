@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *colorPresets;

- (id)init;
- (void).cxx_destruct;
- (void)resetValues;
- (id)colorVariationFromColor:(id)a0;
- (void)saveColorPreset:(id)a0 forColor:(id)a1;
- (id)keyForColor:(id)a0;
- (id)colorPresetFromColor:(id)a0;

@end
