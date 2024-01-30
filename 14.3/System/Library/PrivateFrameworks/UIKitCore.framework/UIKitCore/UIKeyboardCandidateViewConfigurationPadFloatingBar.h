@interface UIKeyboardCandidateViewConfigurationPadFloatingBar : UIKeyboardCandidateViewConfigurationPhoneBarDown

- (id)initialState;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)allowsPullDownGesture;
- (id)extendedState;

@end
