@interface UIKeyboardCandidateViewConfigurationPadFloatingBar : UIKeyboardCandidateViewConfigurationPhoneBarDown

- (id)extendedState;
- (id)initialState;
- (BOOL)allowsPullDownGesture;
- (BOOL)willCoverKeyboardLayout;

@end
