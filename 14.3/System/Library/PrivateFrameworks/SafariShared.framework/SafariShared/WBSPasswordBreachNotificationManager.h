@class UNUserNotificationCenter;

@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
}

- (id)init;
- (void).cxx_destruct;
- (void)addBreachNotificationForSavedPasswords:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_contentWithSavedPasswords:(id)a0;
- (id)_titleForSavedPasswords:(id)a0;
- (id)_bodyForSavedPasswords:(id)a0;

@end
