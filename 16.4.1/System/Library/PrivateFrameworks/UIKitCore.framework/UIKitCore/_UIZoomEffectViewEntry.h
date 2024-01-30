@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry

@property (nonatomic) double zoomAmount;

- (void)applyRequestedEffectToView:(id)a0;
- (BOOL)shouldAnimateProperty:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (void)applyIdentityEffectToView:(id)a0;
- (id)description;
- (void)convertToIdentity;

@end
