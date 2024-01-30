@interface DeliveryAccount : MFAccount

+ (id)accountTypeIdentifier;
+ (id)accountWithIdentifier:(id)a0;
+ (id)newDefaultInstance;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountWithHostname:(id)a0 username:(id)a1;
+ (id)accountWithHostname:(id)a0 username:(id)a1 lookForExistingAccounts:(BOOL)a2;
+ (id)accountWithUniqueId:(id)a0;
+ (void)addDeliveryAccount:(id)a0;
+ (id)carrierDeliveryAccount;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)a0;
+ (id)existingAccountWithHostname:(id)a0 username:(id)a1;
+ (id)existingAccountWithIdentifier:(id)a0;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)a0;

- (void)setUsername:(id)a0;
- (id)identifier;
- (BOOL)hasNoReferences;
- (id)displayHostname;
- (void)_setAccountProperties:(id)a0;
- (void)_updateAccountDescriptionWithUsername:(id)a0 hostname:(id)a1;
- (BOOL)canBeFallbackAccount;
- (Class)deliveryClass;
- (BOOL)hasEnoughInformationForEasySetup;
- (id)mailAccountIfAvailable;
- (unsigned long long)maximumMessageBytes;
- (id)newDeliveryWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)newDeliveryWithMessage:(id)a0;
- (void)setMaximumMessageBytes:(unsigned long long)a0;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (BOOL)shouldUseAuthentication;
- (BOOL)shouldUseSaveSentForAccount:(id)a0;
- (BOOL)supportsOutboxCopy;
- (id)newDeliveryWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3 charsets:(id)a4;

@end
