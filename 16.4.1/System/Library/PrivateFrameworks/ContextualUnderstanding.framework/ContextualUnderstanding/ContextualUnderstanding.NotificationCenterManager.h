@class UNUserNotificationCenter, UNNotificationResponse;

@interface ContextualUnderstanding.NotificationCenterManager : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ accept;
    void /* unknown type, empty encoding */ reject;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ stranger;
    void /* unknown type, empty encoding */ contactAndStranger;
    void /* unknown type, empty encoding */ nobody;
    void /* unknown type, empty encoding */ evaluationDataCollectionCategory;
    void /* unknown type, empty encoding */ labeledDataCollectionCategory;
}

- (void)userNotificationCenter:(UNUserNotificationCenter *)a0 didReceiveNotificationResponse:(UNNotificationResponse *)a1 withCompletionHandler:(void (^)(void))a2;
- (id)init;
- (void).cxx_destruct;

@end
