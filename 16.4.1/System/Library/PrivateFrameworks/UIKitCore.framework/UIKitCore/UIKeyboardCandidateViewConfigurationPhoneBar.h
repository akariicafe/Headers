@interface UIKeyboardCandidateViewConfigurationPhoneBar : UIKeyboardCandidateViewConfiguration

- (id)extendedState;
- (id)initialState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)shouldUsePredictionViewSecureRenderTraits;

@end
