@interface PKPaymentSetupFieldBuiltInCardOnFilePrimaryAccountNumber : PKPaymentSetupFieldText

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;
- (id)displayFormatPaddingCharacters;

@end
