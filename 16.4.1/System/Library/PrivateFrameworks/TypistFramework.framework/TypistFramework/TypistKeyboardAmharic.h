@class NSCharacterSet;

@interface TypistKeyboardAmharic : TypistKeyboard

@property (retain, nonatomic) NSCharacterSet *keycapAndPopoverVowels;
@property (retain, nonatomic) NSCharacterSet *keycapAndPopoverConstants;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)decomposeAmharicChar:(unsigned short)a0;
- (id)decomposeAmharicStrings:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (BOOL)isConsonant:(unsigned short)a0;
- (BOOL)isJoinedConsonantAndVowelCharacter:(unsigned short)a0;
- (BOOL)isPopoverCombo:(id)a0 withIndex:(long long)a1;
- (BOOL)isTapKey:(id)a0;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;

@end
