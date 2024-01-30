@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry

@property (nonatomic) double zoomAmount;

- (void)applyIdentityEffectToView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (BOOL)canTransitionToEffect:(id)a0;
- (BOOL)shouldAnimateProperty:(id)a0;
- (void)convertToIdentity;

@end
