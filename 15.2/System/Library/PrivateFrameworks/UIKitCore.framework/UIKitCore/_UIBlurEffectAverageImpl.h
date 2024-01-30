@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl {
    double _scale;
}

+ (id)sharedInstance;

- (void)appendDescriptionTo:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
