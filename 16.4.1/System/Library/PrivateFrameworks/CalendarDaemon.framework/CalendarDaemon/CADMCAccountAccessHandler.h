@class NSString, NSArray, NSMutableDictionary;
@protocol CADManagedConfigurationHandler, CADPermissionValidator, CADACAccountsProvider;

@interface CADMCAccountAccessHandler : CADAccountAccessHandler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_cachedAccounts;
    NSMutableDictionary *_allowedAccountIdentifiersByAction;
    NSArray *_localAccountRestrictionsByAction;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CADACAccountsProvider> accountsProvider;
@property (readonly, nonatomic) id<CADManagedConfigurationHandler> managedConfigHandler;
@property (readonly, nonatomic) unsigned long long accountManagement;
@property (readonly, nonatomic) id<CADPermissionValidator> permissionValidator;

- (BOOL)isActionAllowed:(unsigned long long)a0 forStore:(const void *)a1 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a2;
- (BOOL)_areLocalStoresRestrictedForAction:(unsigned long long)a0;
- (id)_filteredAccountsForAction:(unsigned long long)a0 withUnfilteredAccounts:(id)a1;
- (void)gatherRestrictedCalendarRowIDs:(id)a0 forAction:(unsigned long long)a1 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a2;
- (BOOL)_isDisabledForAction:(unsigned long long)a0;
- (id)initWithDatabaseDataProvider:(id)a0 accountsProvider:(id)a1 permissionValidator:(id)a2 managedConfigHandler:(id)a3 accountManagement:(unsigned long long)a4 bundleIdentifier:(id)a5;
- (BOOL)_mayShowLocalAccountsForAction:(unsigned long long)a0;
- (id)_cachedAccounts;
- (BOOL)_isAccount:(id)a0 restrictedForAction:(unsigned long long)a1;
- (id)_loadAllowedAccountIdentifiersForAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
