@interface TIWordSearchKorean : TIWordSearch

@property (nonatomic) BOOL tenKeyEnabled;

- (int)mecabraInputMethodType;
- (void)updateMecabraState;

@end
