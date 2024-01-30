@class NSObject, UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSPushRegistrationRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)allBundleIdentifiers;
- (void)performMigration;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)a0;
- (void)setRegistration:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)removeRegistrationForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_performMigration;
- (id)registrationForBundleIdentifier:(id)a0;
- (id)_queue_registrationForBundleIdentifier:(id)a0;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (void)_queue_setRegistration:(id)a0 forBundleIdentifier:(id)a1;

@end
