@interface CAMIntensityStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
