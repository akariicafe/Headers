@class NSString;

@interface CalDefaultReminderKitProvider : NSObject <CalReminderKitProvider>

@property (class, readonly) CalDefaultReminderKitProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDefaultReminderListIdentifier:(id)a0;
- (id)newDatabaseMigrationContext;
- (id)newSaveRequestWithStore:(id)a0;

@end
