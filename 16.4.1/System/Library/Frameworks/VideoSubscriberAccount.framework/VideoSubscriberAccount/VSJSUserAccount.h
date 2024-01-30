@class NSString, VSUserAccount, NSArray, NSDate;

@interface VSJSUserAccount : VSJSObject <VSJSUserAccount>

@property (retain, nonatomic) VSUserAccount *originatingUserAccount;
@property (copy, nonatomic) NSString *updateURL;
@property (nonatomic) BOOL requiresSystemTrust;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long accountType;
@property (nonatomic, getter=isSignedOut) BOOL signedOut;
@property (copy, nonatomic) NSDate *subscriptionBillingCycleEndDate;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSString *authenticationData;
@property (nonatomic) long long deviceCategory;

+ (id)nativeUserAccountsForJSUserAccounts:(id)a0;
+ (id)userAccountsWithNativeUserAccounts:(id)a0;

- (void).cxx_destruct;
- (id)initWithUserAccount:(id)a0;
- (id)nativeUserAccount;

@end
