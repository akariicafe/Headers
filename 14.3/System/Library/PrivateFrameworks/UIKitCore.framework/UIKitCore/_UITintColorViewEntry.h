@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) UIColor *tintColor;

- (void)removeEffectFromView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyIdentityEffectToView:(id)a0;
- (id)description;

@end
