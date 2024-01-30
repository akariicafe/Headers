@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl {
    double _scale;
}

+ (id)sharedInstance;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithScale:(double)a0;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
