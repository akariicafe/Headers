@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (long long)_expectedUsage;
- (id)description;
- (id)_allEffects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEffects:(id)a0;
- (unsigned long long)hash;
- (void)_enumerateEffects:(id /* block */)a0;

@end
