@interface _UIEmptyEffect : UIVisualEffect

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)_enumerateEffects:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)_allEffects;

@end
