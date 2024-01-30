@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (void)publish;
- (void)removeAllNotifications;
- (id)sectionIdentifier;
- (void)update;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;
- (id)_userNotificationCenter;
- (id)_existingNotificationRequestForIdentifier:(id)a0;
- (id)latestNotificationRequestIdentifier;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (id)init;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_basicPostUpdateRecipe;

@end
