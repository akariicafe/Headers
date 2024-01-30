@interface SBLiveIconImageView : SBIconImageView

- (void)setPaused:(BOOL)a0;
- (id)snapshot;
- (void)prepareForReuse;
- (void)updateImageAnimated:(BOOL)a0;
- (BOOL)isAnimationAllowed;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (void)updateUnanimated;
- (void)updateAnimatingState;

@end
