@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (void)suggestedUsersOfType:(long long)a0 matchingText:(id)a1 completionHandler:(id /* block */)a2;
- (void)_passwordStoreChangedNotification:(id)a0;
- (id)_allCachedSuggestedUsersWithType:(long long)a0;
- (id)_cachedSuggestedUsersWithType:(long long)a0 matchingText:(id)a1;
- (void)_getSuggestedUsersFromSavedPasswords:(id)a0 suggestedEmails:(id *)a1 suggestedNonEmails:(id *)a2;
- (void)suggestedUsersOfType:(long long)a0 completionHandler:(id /* block */)a1;

@end
