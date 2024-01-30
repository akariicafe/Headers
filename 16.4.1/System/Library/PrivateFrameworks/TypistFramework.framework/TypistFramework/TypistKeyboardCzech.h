@class NSDictionary;

@interface TypistKeyboardCzech : TypistKeyboard

@property (retain, nonatomic) NSDictionary *acuteKeys;
@property (retain, nonatomic) NSDictionary *caronKeys;
@property (retain, nonatomic) NSDictionary *acuteDiacriticKey;
@property (retain, nonatomic) NSDictionary *caronDiacriticKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)preprocessing;
- (void).cxx_destruct;
- (id)addAccentKeyAction:(id)a0;
- (id)convertRepresentedStringsIfNecessary:(id)a0;
- (id)getPostfixKey:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;

@end
