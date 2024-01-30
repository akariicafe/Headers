@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)imageNameForCurrentState;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (long long)controlType;
- (BOOL)adjustsImageWhenDisabled;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;

@end
