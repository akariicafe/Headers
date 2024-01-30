@class NSString, UIColor;

@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {
    NSString *_filterType;
    UIColor *_inputColor1;
    UIColor *_inputColor2;
    UIColor *_compositingColor;
    BOOL _inputReversed;
}

- (void)appendDescriptionTo:(id)a0;
- (id)initWithFilter:(id)a0 inputColor1:(id)a1 inputColor2:(id)a2 compositingColor:(id)a3 inputReversed:(BOOL)a4;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)implementationReplacingTintColor:(id)a0;
- (unsigned long long)hash;

@end
