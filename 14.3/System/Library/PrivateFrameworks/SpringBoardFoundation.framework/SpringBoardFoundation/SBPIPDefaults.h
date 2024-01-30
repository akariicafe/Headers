@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL allowAutoPIP;
@property (readonly, nonatomic) BOOL visualizeKeyboardFrame;

- (void)_bindAndRegisterDefaults;

@end
