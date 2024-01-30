@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (id)initWithCoder:(id)a0;
- (long long)_expectedUsage;
- (BOOL)isEqual:(id)a0;
- (id)_allEffects;
- (unsigned long long)hash;
- (void)_enumerateEffects:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEffects:(id)a0;

@end
