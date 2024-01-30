@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad

@property (readonly, nonatomic) unsigned long long numberOfDigits;

- (id)_newEntryField;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (id)initWithLightStyle:(BOOL)a0 numberOfDigits:(unsigned long long)a1;
- (id)initWithLightStyle:(BOOL)a0;

@end
