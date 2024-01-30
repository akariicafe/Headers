@interface CAMDrawerExposureButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
