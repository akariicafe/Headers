@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)allowsPullDownGesture;
- (unsigned long long)rowsToExtend;

@end
