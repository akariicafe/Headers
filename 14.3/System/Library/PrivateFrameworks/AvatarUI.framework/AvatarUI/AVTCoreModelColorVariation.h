@class AVTCoreModelColor, AVTColorPreset;

@interface AVTCoreModelColorVariation : NSObject

@property (readonly, nonatomic) AVTColorPreset *colorPreset;
@property (readonly, nonatomic) AVTCoreModelColor *color;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 colorPreset:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
