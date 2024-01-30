@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)adjustsImageWhenDisabled;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (id)imageNameForAXHUD;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
