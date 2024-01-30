@class DeliveryAccount;

@interface MFOSXServerIMAPAccount : IMAPAccount {
    DeliveryAccount *_deliveryAccount;
}

+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)accountTypeIdentifier;
+ (id)newChildAccountWithParentAccount:(id)a0 error:(id *)a1;
+ (id)_authSchemeForAuthenticationMethod:(id)a0;

- (id)_credentialCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)displayName;

@end
