@class NSString, WFUserNotificationManager, VCTriggerNotificationDebouncer;
@protocol VCUserNotificationManagerDelegate;

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, VCTriggerNotificationDebouncerDelegate>

@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly, nonatomic) VCTriggerNotificationDebouncer *debouncer;
@property (weak, nonatomic) id<VCUserNotificationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifiers;
+ (id)promptCategory;
+ (id)alertCategory;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)postNotificationThatTrigger:(id)a0 failedWithError:(id)a1;
- (BOOL)_postNotificationOfType:(unsigned long long)a0 forTrigger:(id)a1 workflowReference:(id)a2 removeDeliveredNotifications:(BOOL)a3 pendingTriggerEventIDs:(id)a4 actionIcons:(id)a5 error:(id *)a6;
- (id)initWithUserNotificationManager:(id)a0;
- (BOOL)postNotificationOfType:(unsigned long long)a0 forTrigger:(id)a1 workflowReference:(id)a2 removeDeliveredNotifications:(BOOL)a3 pendingTriggerEventIDs:(id)a4 actionIcons:(id)a5 error:(id *)a6;
- (void).cxx_destruct;
- (void)postNotificationForTrigger:(id)a0 workflowReference:(id)a1 pendingTriggerEventIDs:(id)a2;
- (void)removeNotificationsWithTriggerIdentifier:(id)a0;
- (void)removeStaleNotificationsWithCompletion:(id /* block */)a0;

@end
