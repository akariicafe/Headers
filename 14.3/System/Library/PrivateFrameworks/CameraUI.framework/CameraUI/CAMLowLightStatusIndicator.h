@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) double duration;
@property (nonatomic) long long lowLightMode;
@property (nonatomic, getter=isLowLightDisabled) BOOL lowLightDisabled;

- (id)imageNameForCurrentState;
- (id)valueText;
- (void)setLowLightDisabled:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)canShowValue;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;

@end
