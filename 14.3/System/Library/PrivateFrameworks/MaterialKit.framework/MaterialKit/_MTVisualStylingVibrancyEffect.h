@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect

@property (readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)effectConfigForQuality:(long long)a0;
- (id)effectConfig;
- (BOOL)isEqual:(id)a0;
- (id)initWithVisualStyling:(id)a0;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
