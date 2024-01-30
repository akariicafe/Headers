@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *colorPresets;

- (void)resetValues;
- (void).cxx_destruct;
- (id)init;
- (id)colorPresetFromColor:(id)a0;
- (void)saveColorPreset:(id)a0 forColor:(id)a1;
- (id)colorVariationFromColor:(id)a0;
- (id)keyForColor:(id)a0;

@end
