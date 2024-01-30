@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedScrolledState;
- (BOOL)shouldAlwaysShowSortControl;
- (unsigned long long)rowsToExtend;
- (id)arrowButtonSeparatorImage;
- (BOOL)shouldResizeKeyboardBackdrop;
- (double)candidateDefaultFontSize;
- (id)edgeSeparatorImage;
- (id)extendedState;

@end
