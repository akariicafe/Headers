@interface CAMHDRStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setHDRMode:) long long hdrMode;
@property (nonatomic, getter=isAutoHDRAllowed) BOOL autoHDRAllowed;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setHDRMode:(long long)a0 animated:(BOOL)a1;
- (void)setAllowAutoHDR:(BOOL)a0;

@end
