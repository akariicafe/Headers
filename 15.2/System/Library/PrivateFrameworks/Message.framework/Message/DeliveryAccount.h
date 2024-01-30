@class NSString, ACAccount, NSArray;

@interface DeliveryAccount : MFAccount <EDDeliveryAccount>

@property (readonly, nonatomic) unsigned long long maximumMessageBytes;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly, nonatomic) BOOL primaryiCloudAccount;
@property (readonly, nonatomic) BOOL isActive;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSArray *emailAddressStrings;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountWithIdentifier:(id)a0;
+ (id)accountTypeIdentifier;
+ (id)newDefaultInstance;
+ (id)existingAccountForUniqueID:(id)a0;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)deliveryAccounts;
+ (id)accountWithHostname:(id)a0 username:(id)a1 lookForExistingAccounts:(BOOL)a2;
+ (id)existingAccountWithHostname:(id)a0 username:(id)a1;
+ (void)addDeliveryAccount:(id)a0;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)a0;
+ (id)accountWithUniqueId:(id)a0;
+ (id)existingAccountWithIdentifier:(id)a0;
+ (id)accountWithHostname:(id)a0 username:(id)a1;
+ (id)carrierDeliveryAccount;

@end
