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
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (id)primaryICloudAccount;
+ (BOOL)isAccountInfoAvailable;

- (BOOL)isCurrentICloudAccountUnderage;
- (void)_accountStoreDidChange:(id)a0;
- (id)primaryICloudAccount;
- (void).cxx_destruct;
- (id)init;
- (id)_primaryICloudAccountIsolated;

@end
