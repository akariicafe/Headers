@class NSObject;
@protocol OS_dispatch_queue;

@interface ICLockedNotesModeMigrator : NSObject

@property (class, readonly, nonatomic) ICLockedNotesModeMigrator *sharedMigrator;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)account:(id)a0 hasNotesLockedWithMode:(short)a1;
- (BOOL)account:(id)a0 supportsMode:(short)a1;
- (id)lockedNotesInAccount:(id)a0;
- (void)migrateLockedNotesInAccount:(id)a0 toMode:(short)a1 window:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentBackwardsCompatibilityAlertIfNeededForAccount:(id)a0 mode:(short)a1 window:(id)a2 confirmHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
- (void)presentDivergedModeAlertForNote:(id)a0 mode:(short)a1 window:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentLockedNotesLearnMoreViewForAccount:(id)a0 window:(id)a1;
- (void)presentLockedNotesMigrationPromptIfNeededForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentLockedNotesSwitchMigrationPromptIfSupportedForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentLockedNotesWelcomeMigrationPromptIfSupportedForAccount:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)unsafelyMigrateLockedNotesInAccount:(id)a0 toMode:(short)a1 progress:(id)a2;
- (id)unsafelyMigrateNote:(id)a0 toMode:(short)a1;

@end
