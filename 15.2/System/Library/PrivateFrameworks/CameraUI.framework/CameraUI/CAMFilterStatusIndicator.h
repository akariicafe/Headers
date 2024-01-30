@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (BOOL)shouldUseActiveTintForCurrentState;
- (id)imageNameForAXHUD;
- (BOOL)shouldUseHierarchicalSymbol;

@end
