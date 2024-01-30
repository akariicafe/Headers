@interface DeliveryAccount : MFAccount

+ (id)existingAccountForUniqueID:(id)a0;
+ (id)newDefaultInstance;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountWithHostname:(id)a0 username:(id)a1 lookForExistingAccounts:(BOOL)a2;
+ (id)existingAccountWithHostname:(id)a0 username:(id)a1;
+ (void)addDeliveryAccount:(id)a0;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)a0;
+ (id)accountWithUniqueId:(id)a0;
+ (id)existingAccountWithIdentifier:(id)a0;
+ (id)accountWithHostname:(id)a0 username:(id)a1;
+ (id)carrierDeliveryAccount;
+ (id)accountWithIdentifier:(id)a0;
+ (id)deliveryAccounts;
+ (id)accountTypeIdentifier;

- (void)_setAccountProperties:(id)a0;
- (BOOL)shouldUseAuthentication;
- (id)newDeliveryWithMessage:(id)a0;
- (id)newDeliveryWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;
- (void)_updateAccountDescriptionWithUsername:(id)a0 hostname:(id)a1;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (unsigned long long)maximumMessageBytes;
- (void)setMaximumMessageBytes:(unsigned long long)a0;
- (BOOL)hasNoReferences;
- (id)displayHostname;
- (BOOL)canBeFallbackAccount;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)supportsOutboxCopy;
- (BOOL)shouldUseSaveSentForAccount:(id)a0;
- (void)setUsername:(id)a0;
- (id)identifier;
- (id)newDeliveryWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;

@end
