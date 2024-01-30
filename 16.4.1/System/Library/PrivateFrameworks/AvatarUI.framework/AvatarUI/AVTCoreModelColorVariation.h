@class AVTCoreModelColor, AVTColorPreset;

@interface AVTCoreModelColorVariation : NSObject

@property (readonly, nonatomic) AVTColorPreset *colorPreset;
@property (readonly, nonatomic) AVTCoreModelColor *color;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 colorPreset:(id)a1;

@end
