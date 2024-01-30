@interface PKPaymentSetupFieldBuiltInCardOnFilePrimaryAccountNumber : PKPaymentSetupFieldText

- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;
- (id)displayFormatPaddingCharacters;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isBuiltIn;

@end
