@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect

@property (readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling;

- (id)initWithVisualStyling:(id)a0;
- (id)effectConfigForQuality:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)effectConfig;

@end
