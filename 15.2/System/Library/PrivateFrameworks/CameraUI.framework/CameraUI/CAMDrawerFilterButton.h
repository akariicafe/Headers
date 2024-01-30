@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;
- (BOOL)isSelfExpanding;

@end
