@interface UIKeyboardCandidateViewConfigurationPhoneBar : UIKeyboardCandidateViewConfiguration

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;
- (unsigned long long)rowsToExtend;

@end
