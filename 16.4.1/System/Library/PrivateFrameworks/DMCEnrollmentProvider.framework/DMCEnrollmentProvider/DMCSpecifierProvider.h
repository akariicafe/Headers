@class NSArray, NSString, ACAccount, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface DMCSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (copy, nonatomic) NSArray *specifiers;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly, nonatomic) ACAccount *rmAccount;
@property (nonatomic) BOOL isReloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0 reloadNotification:(id)a1 reloadIfMissingRMAccount:(BOOL)a2;
- (id)cachedSpecifiers:(id)a0;
- (void)reloadNotificationPosted:(id)a0;
- (void)reloadSpecifiers;
- (id)_cellForSpecifier:(id)a0 inTableView:(id)a1;
- (id)tableCellsForSpecifiersInTableView:(id)a0;
- (void)_listenForNotification:(id)a0;
- (void)registerSpecifierBridgeForTableView:(id)a0;
- (id)initWithAccountManager:(id)a0;
- (void)dealloc;
- (id)initWithAccount:(id)a0 reloadNotification:(id)a1 reloadIfMissingRMAccount:(BOOL)a2;
- (id)specifiersReloadedNotificationName;
- (void).cxx_destruct;

@end
