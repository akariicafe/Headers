@class NSString;
@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalInProcessReminderMigrator : NSObject <CalReminderMigrator>

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;

@end
