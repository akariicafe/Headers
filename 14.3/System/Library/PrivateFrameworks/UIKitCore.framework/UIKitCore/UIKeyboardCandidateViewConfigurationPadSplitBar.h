@interface UIKeyboardCandidateViewConfigurationPadSplitBar : UIKeyboardCandidateViewConfigurationPadBar

- (id)initialState;
- (BOOL)shouldAlwaysShowSortControl;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;
- (double)candidateDefaultFontSize;
- (id)extendedState;

@end
