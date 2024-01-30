@class UIColor;

@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry

@property (retain) UIColor *backgroundColor;

- (void)applyIdentityEffectToView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (void)addEffectToView:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;

@end
