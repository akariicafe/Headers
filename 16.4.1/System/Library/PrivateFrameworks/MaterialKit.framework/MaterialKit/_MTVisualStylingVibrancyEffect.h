@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect

@property (readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVisualStyling:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectForUserInterfaceStyle:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)effectConfigForQuality:(long long)a0;
- (unsigned long long)hash;
- (id)effectConfig;
- (void).cxx_destruct;

@end
