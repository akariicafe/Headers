@interface _UIBlurEffectModernImpl : _UIBlurEffectImpl {
    double _blurRadius;
    double _blurScale;
}

- (void)appendDescriptionTo:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBlurRadius:(double)a0 scale:(double)a1;
- (unsigned long long)hash;

@end
