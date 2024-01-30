@interface UIKeyboardCandidateViewConfigurationPadSplitBar : UIKeyboardCandidateViewConfigurationPadBar

- (id)extendedState;
- (id)initialState;
- (double)candidateDefaultFontSize;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldAlwaysShowSortControl;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;

@end
