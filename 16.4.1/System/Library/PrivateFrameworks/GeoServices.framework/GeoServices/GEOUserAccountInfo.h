@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (id)sharedInstance;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (id)primaryICloudAccount;
+ (BOOL)isCurrentICloudAccountManaged;

- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountUnderage;
- (id)_primaryICloudAccountIsolated;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)primaryICloudAccount;
- (id)init;
- (BOOL)isCurrentICloudAccountManaged;
- (void).cxx_destruct;

@end
