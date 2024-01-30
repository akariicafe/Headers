@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)extendedState;
- (id)initialState;
- (BOOL)allowsPullDownGesture;
- (id)extendedScrolledState;
- (unsigned long long)rowsToExtend;
- (BOOL)shouldResizeKeyboardBackdrop;
- (BOOL)willCoverKeyboardLayout;

@end
