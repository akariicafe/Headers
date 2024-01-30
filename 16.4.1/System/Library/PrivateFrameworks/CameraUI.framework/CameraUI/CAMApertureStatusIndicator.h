@interface CAMApertureStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) double apertureValue;
@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (id)valueText;
- (BOOL)canShowValue;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
