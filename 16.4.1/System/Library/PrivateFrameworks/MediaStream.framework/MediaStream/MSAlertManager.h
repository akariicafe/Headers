@class NSMutableDictionary;

@interface MSAlertManager : NSObject {
    NSMutableDictionary *_personIDToNotification;
}

+ (id)sharedAlertManager;

- (id)init;
- (void).cxx_destruct;
- (void)_dismissNotificationForPersonID:(id)a0;
- (void)_showNotificationInfo:(id)a0;
- (void)_userDidRespondToNotification:(struct __CFUserNotification { } *)a0 info:(id)a1 responseFlags:(unsigned long long)a2;
- (void)displayAlertForPersonID:(id)a0 notificationDict:(id)a1 completionBlock:(id /* block */)a2;

@end
