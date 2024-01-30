@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)isSelfExpanding;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;

@end
