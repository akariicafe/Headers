@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (id)imageNameForAXHUD;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;

@end
