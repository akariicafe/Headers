@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (void)publish;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (id)latestNotificationRequestIdentifier;
- (id)sectionIdentifier;
- (id)init;
- (void).cxx_destruct;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_existingNotificationRequestForIdentifier:(id)a0;
- (void)update;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;
- (id)_userNotificationCenter;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (id)_basicPostUpdateRecipe;
- (void)removeAllNotifications;

@end
