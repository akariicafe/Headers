@interface CAMProResStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setProResVideoMode:) long long proResVideoMode;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageNameForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setProResVideoMode:(long long)a0 animated:(BOOL)a1;

@end
