@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (BOOL)shouldAlwaysShowSortControl;
- (id)arrowButtonSeparatorImage;
- (BOOL)shouldResizeKeyboardBackdrop;
- (double)candidateDefaultFontSize;
- (id)edgeSeparatorImage;
- (unsigned long long)rowsToExtend;

@end
