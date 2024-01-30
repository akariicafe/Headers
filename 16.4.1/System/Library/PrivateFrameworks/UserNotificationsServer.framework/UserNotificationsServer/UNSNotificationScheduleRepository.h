@class NSObject, UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationScheduleRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_queue_scheduleForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (id)allBundleIdentifiers;
- (void)_queue_performMigration;
- (void)_queue_setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (id)_dateFormatter;
- (void)_queue_removeScheduleForBundleIdentifier:(id)a0;
- (void)setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (void)performMigration;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)removeScheduleForBundleIdentifier:(id)a0;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (id)scheduleForBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
