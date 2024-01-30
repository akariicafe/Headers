@class MCProfileConnection;

@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler>

@property (readonly, nonatomic) MCProfileConnection *connection;

- (id)filteredOpenInOriginatingAccounts:(id)a0 targetAppBundleID:(id)a1 targetAccountManagement:(int)a2;
- (id)filteredOpenInAccounts:(id)a0 originatingAppBundleID:(id)a1 sourceAccountManagement:(int)a2;
- (BOOL)isOpenInRestrictionInEffect;
- (void).cxx_destruct;
- (BOOL)mayShowLocalAccountsForTargetBundleID:(id)a0 targetAccountManagement:(int)a1;
- (id)initWithMCProfileConnection:(id)a0;
- (BOOL)mayShowLocalAccountsForBundleID:(id)a0 sourceAccountManagement:(int)a1;

@end
