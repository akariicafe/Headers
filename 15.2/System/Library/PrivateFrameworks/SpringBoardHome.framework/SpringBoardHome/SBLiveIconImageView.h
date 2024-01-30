@interface SBLiveIconImageView : SBIconImageView

- (BOOL)isAnimationAllowed;
- (void)updateImageAnimated:(BOOL)a0;
- (id)snapshot;
- (void)setPaused:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateAnimatingState;
- (void)updateUnanimated;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;

@end
