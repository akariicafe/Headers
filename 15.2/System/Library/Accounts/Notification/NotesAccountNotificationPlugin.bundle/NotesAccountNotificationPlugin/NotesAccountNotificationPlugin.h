@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NotesAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relevantAccountTypeIdentifiers;

- (BOOL)canRemoveAccount:(id)a0 inStore:(id)a1;
- (void)acAccount:(id)a0 wasDeletedInStore:(id)a1;
- (void)deleteSpotlightDomainForAccount:(id)a0;
- (void)applicationInstalledOrUninstalled:(id)a0;
- (void)acAccount:(id)a0 wasModifiedInStore:(id)a1;
- (void)deleteSpotlightDomainIfNecessaryForAccount:(id)a0 oldAccount:(id)a1;
- (void).cxx_destruct;
- (void)fetchAndSetMigrationStateForACAccount:(id)a0 inStore:(id)a1;
- (id)init;
- (BOOL)shouldProcessChangeType:(int)a0 forACAccount:(id)a1;
- (void)deleteLegacyAccountForACAccount:(id)a0;
- (void)updateLegacyAccountForParentACAccount:(id)a0;
- (void)updateAccountForParentACAccount:(id)a0 inStore:(id)a1;
- (void)dealloc;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)deleteAccountForACAccount:(id)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
