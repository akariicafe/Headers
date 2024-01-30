@interface UIKeyboardCandidateViewConfigurationPhoneBar : UIKeyboardCandidateViewConfiguration

- (id)initialState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;
- (id)extendedState;

@end
