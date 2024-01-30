@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)extendedState;
- (id)initialState;
- (id)arrowButtonSeparatorImage;
- (double)candidateDefaultFontSize;
- (id)edgeSeparatorImage;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldAlwaysShowSortControl;
- (BOOL)shouldResizeKeyboardBackdrop;

@end
