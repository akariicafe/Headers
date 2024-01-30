@class NSMutableDictionary;

@interface MSAlertManager : NSObject {
    NSMutableDictionary *_personIDToNotification;
}

+ (id)sharedAlertManager;

- (void).cxx_destruct;
- (id)init;
- (void)_userDidRespondToNotification:(struct __CFUserNotification { } *)a0 info:(id)a1 responseFlags:(unsigned long long)a2;
- (void)_dismissNotificationForPersonID:(id)a0;
- (void)_showNotificationInfo:(id)a0;
- (void)displayAlertForPersonID:(id)a0 notificationDict:(id)a1 completionBlock:(id /* block */)a2;

@end
