@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation

- (id)init;
- (void)setAccountNumber:(id)a0;
- (id)_bankAccountInformationInKeychain;
- (id)_wrapperWithType:(unsigned long long)a0;
- (void)_writeBankAccountInformationToKeychain;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (void)setBankName:(id)a0;
- (void)setRoutingNumber:(id)a0;
- (void)updateToLatestKeychainData;

@end
