@interface CAMRAWStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setRAWMode:) long long rawMode;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)imageNameForCurrentState;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageNameForAXHUD;
- (void)setRAWMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
