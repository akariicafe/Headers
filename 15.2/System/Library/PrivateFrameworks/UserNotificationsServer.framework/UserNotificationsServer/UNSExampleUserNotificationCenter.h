@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (id)sectionIdentifier;
- (void)removeAllNotifications;
- (id)latestNotificationRequestIdentifier;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (id)_basicPostUpdateRecipe;
- (id)_userNotificationCenter;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;
- (id)_existingNotificationRequestForIdentifier:(id)a0;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)publish;

@end
