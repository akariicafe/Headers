@class DeliveryAccount;

@interface MFOSXServerIMAPAccount : IMAPAccount {
    DeliveryAccount *_deliveryAccount;
}

+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)newChildAccountWithParentAccount:(id)a0 error:(id *)a1;
+ (id)_authSchemeForAuthenticationMethod:(id)a0;

- (id)displayName;
- (void)setPassword:(id)a0;
- (void)dealloc;
- (id)_credentialCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;

@end
