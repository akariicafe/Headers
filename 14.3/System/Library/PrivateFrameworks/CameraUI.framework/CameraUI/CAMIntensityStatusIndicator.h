@interface CAMIntensityStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (BOOL)shouldUseOutline;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
