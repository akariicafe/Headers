@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *colorPresets;

- (void)resetValues;
- (id)init;
- (void).cxx_destruct;
- (id)colorPresetFromColor:(id)a0;
- (id)colorVariationFromColor:(id)a0;
- (id)keyForColor:(id)a0;
- (void)saveColorPreset:(id)a0 forColor:(id)a1;

@end
