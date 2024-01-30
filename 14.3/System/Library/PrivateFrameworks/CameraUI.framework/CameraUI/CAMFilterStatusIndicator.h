@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (BOOL)shouldUseOutline;
- (id)imageForCurrentState;

@end
