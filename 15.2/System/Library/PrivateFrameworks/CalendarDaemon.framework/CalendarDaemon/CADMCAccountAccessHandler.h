@class NSString, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue, CADManagedConfigurationHandler, CADCalStoreInfoProvider, CADACAccountsProvider, CADCalCalendarInfoProvider, CADPermissionValidator;

@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CADACAccountsProvider> accountsProvider;
@property (readonly, nonatomic) id<CADManagedConfigurationHandler> managedConfigHandler;
@property (readonly, nonatomic) unsigned long long accountManagement;
@property (readonly, nonatomic) id<CADCalStoreInfoProvider> calStoreInfoProvider;
@property (readonly, nonatomic) id<CADCalCalendarInfoProvider> calCalendarInfoProvider;
@property (readonly, nonatomic) id<CADPermissionValidator> permissionValidator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedRestrictedStoreInfos;
@property (retain, nonatomic) NSArray *cachedAccounts;

- (id)_filteredAccountsForAction:(unsigned long long)a0 withUnfilteredAccounts:(id)a1;
- (id)_cachedAccounts;
- (id)_restrictedCalStoreInfosForAction:(unsigned long long)a0;
- (BOOL)isAccountManaged:(id)a0;
- (void)_validateAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (BOOL)_mayShowLocalAccountsForAction:(unsigned long long)a0;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (BOOL)_isDisabledForAction:(unsigned long long)a0;
- (BOOL)isActionAllowed:(unsigned long long)a0 forAccountIdentifier:(id)a1;
- (void)reset;
- (id)initWithCalStoreInfoProvider:(id)a0 calendarInfoProvider:(id)a1 accountsProvider:(id)a2 permissionValidator:(id)a3 managedConfigHandler:(id)a4 accountManagement:(unsigned long long)a5 bundleIdentifier:(id)a6;
- (BOOL)_existingCalStoreMapsToAccountIdentifier:(id)a0;

@end
