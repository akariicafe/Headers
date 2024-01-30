@interface CAMRAWStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setRAWMode:) long long rawMode;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageNameForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setRAWMode:(long long)a0 animated:(BOOL)a1;

@end
