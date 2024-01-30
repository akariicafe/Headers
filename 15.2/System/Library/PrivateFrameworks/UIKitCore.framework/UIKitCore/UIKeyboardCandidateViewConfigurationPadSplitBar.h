@interface UIKeyboardCandidateViewConfigurationPadSplitBar : UIKeyboardCandidateViewConfigurationPadBar

- (id)initialState;
- (id)extendedState;
- (BOOL)shouldAlwaysShowSortControl;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;
- (double)candidateDefaultFontSize;
- (unsigned long long)rowsToExtend;

@end
