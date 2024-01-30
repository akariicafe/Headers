@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation

- (void)updateToLatestKeychainData;
- (void)deleteAllBankInformation;
- (id)_wrapperWithType:(unsigned long long)a0;
- (void)deleteAllLocalBankInformation;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;
- (void)setAccountNumber:(id)a0;
- (id)init;
- (void)setRoutingNumber:(id)a0;
- (void)setBankName:(id)a0;

@end
