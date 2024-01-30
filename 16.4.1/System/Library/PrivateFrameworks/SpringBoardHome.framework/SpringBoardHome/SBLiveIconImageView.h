@interface SBLiveIconImageView : SBIconImageView

- (void)updateImageAnimated:(BOOL)a0;
- (void)updateAnimatingState;
- (void)prepareForReuse;
- (void)updateUnanimated;
- (void)setPaused:(BOOL)a0;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (id)snapshot;
- (BOOL)isAnimationAllowed;

@end
