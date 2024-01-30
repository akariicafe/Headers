@interface CAMTimerStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) long long timerDuration;

- (id)imageNameForCurrentState;
- (id)valueText;
- (BOOL)canShowValue;

@end
