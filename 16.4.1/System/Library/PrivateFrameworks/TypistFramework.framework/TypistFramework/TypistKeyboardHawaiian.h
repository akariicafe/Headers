@class NSDictionary;

@interface TypistKeyboardHawaiian : TypistKeyboard

@property (retain, nonatomic) NSDictionary *kahakoKeys;
@property (retain, nonatomic) NSDictionary *kahakoDiacriticKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)preprocessing;
- (void).cxx_destruct;
- (id)addAccentKeyAction:(id)a0;
- (id)getPostfixKey:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupSentenceBoundryStrings;

@end
