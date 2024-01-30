@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation

- (id)init;
- (void)setBankName:(id)a0;
- (void)updateToLatestKeychainData;
- (void)deleteAllBankInformation;
- (id)_wrapperWithType:(unsigned long long)a0;
- (void)deleteAllLocalBankInformation;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;
- (void)setAccountNumber:(id)a0;
- (void)setRoutingNumber:(id)a0;

@end
