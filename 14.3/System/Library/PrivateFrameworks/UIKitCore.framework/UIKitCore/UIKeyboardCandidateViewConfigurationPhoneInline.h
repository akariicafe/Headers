@interface UIKeyboardCandidateViewConfigurationPhoneInline : UIKeyboardCandidateViewConfiguration

- (id)initialState;
- (unsigned long long)rowsToExtend;
- (unsigned long long)maxNumberOfProactiveCandidates;
- (id)extendedState;

@end
