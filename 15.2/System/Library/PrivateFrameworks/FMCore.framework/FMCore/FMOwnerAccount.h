@class NSString, ACAccount;

@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity>

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *personId;
@property (nonatomic) BOOL legacyBehavior;
@property (readonly, copy, nonatomic) NSString *authToken;

+ (id)sharedInstance;
+ (id)ownerAccount;
+ (id)primaryAccountWithStore:(id)a0 error:(id *)a1;
+ (id)personIdForAccount:(id)a0 error:(id *)a1;
+ (id)subAccountForAccount:(id)a0 type:(long long)a1;
+ (id)authTokenForSubAccount:(id)a0 type:(long long)a1 error:(id *)a2;
+ (id)hostNameForAccount:(id)a0 type:(long long)a1;
+ (id)ownerAccountWithType:(long long)a0;
+ (void)renewCredentialsWithBundleId:(id)a0 force:(BOOL)a1 reason:(id)a2 completion:(id /* block */)a3;

- (void)accountChanged;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initializeAccount;
- (id)initWithAuthToken:(id)a0 personId:(id)a1;
- (id)tokenOfType:(long long)a0;
- (id)hostNameOfType:(long long)a0;

@end
