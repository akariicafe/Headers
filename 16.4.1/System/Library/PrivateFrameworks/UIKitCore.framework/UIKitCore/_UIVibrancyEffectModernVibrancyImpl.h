@class NSString, UIColor;

@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {
    NSString *_filterType;
    UIColor *_inputColor1;
    UIColor *_inputColor2;
    UIColor *_compositingColor;
    BOOL _inputReversed;
}

- (void)encodeWithCoder:(id)a0;
- (id)implementationReplacingTintColor:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFilter:(id)a0 inputColor1:(id)a1 inputColor2:(id)a2 compositingColor:(id)a3 inputReversed:(BOOL)a4;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
