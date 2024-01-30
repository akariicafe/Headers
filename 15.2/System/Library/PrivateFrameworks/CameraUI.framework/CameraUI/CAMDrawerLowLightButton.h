@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (BOOL)adjustsImageWhenDisabled;
- (long long)controlType;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;

@end
