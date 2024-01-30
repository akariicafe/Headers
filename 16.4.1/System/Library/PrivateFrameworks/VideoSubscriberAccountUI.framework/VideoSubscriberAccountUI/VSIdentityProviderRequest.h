@class VSPersistentStorage, NSString, VSAccount, VSOptional;

@interface VSIdentityProviderRequest : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *requestingAppAdamID;
@property (retain, nonatomic) VSAccount *account;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSOptional *accountMetadataRequest;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (readonly, nonatomic) BOOL forceAuthentication;
@property (readonly, nonatomic) BOOL allowsUI;
@property (readonly, nonatomic) BOOL requiresUI;

+ (id)STBOptOutRequestWithStorage:(id)a0;
+ (id)accountMetadataRequestWithAccount:(id)a0 storage:(id)a1 accountMetadataRequest:(id)a2 requestingAppDisplayName:(id)a3 requestingAppAdamID:(id)a4 accountProviderAuthenticationToken:(id)a5;
+ (id)deleteAccountRequestWithAccount:(id)a0 storage:(id)a1;
+ (id)makeAccountRequestWithStorage:(id)a0;
+ (id)silentMakeAccountRequestWithStorage:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithRequestType:(long long)a0 account:(id)a1 storage:(id)a2;

@end
