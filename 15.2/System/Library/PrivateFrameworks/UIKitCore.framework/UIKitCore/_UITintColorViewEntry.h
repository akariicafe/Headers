@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) UIColor *tintColor;

- (void)applyIdentityEffectToView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
