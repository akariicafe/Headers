@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_enumerateEffects:(id /* block */)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_allEffects;
- (long long)_expectedUsage;
- (id)initWithEffects:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
