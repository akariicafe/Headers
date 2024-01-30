@interface UIKeyboardCandidateViewConfigurationPadFloatingBar : UIKeyboardCandidateViewConfigurationPhoneBarDown

- (id)initialState;
- (id)extendedState;
- (BOOL)willCoverKeyboardLayout;
- (BOOL)allowsPullDownGesture;

@end
