@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)allowsPullDownGesture;
- (id)extendedState;

@end
