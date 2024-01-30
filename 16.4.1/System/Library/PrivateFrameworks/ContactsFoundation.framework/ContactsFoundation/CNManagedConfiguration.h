@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;

+ (id)os_log;

- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (BOOL)canWriteToLocalAccount;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (BOOL)canReadFromLocalAccount;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (BOOL)deviceHasManagementRestrictions;
- (int)accountManagementForIdentifier:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;
- (id)writableAccountsFromAccounts:(id)a0;
- (id)writableAccountsFromAccounts:(id)a0 sourceAccountManagement:(int)a1;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (id)init;
- (id)readableAccountsFromAccounts:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (id)accountForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)accountIsManaged:(id)a0;

@end
