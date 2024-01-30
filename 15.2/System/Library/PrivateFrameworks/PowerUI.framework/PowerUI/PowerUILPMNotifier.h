@class UNUserNotificationCenter, NSString, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface PowerUILPMNotifier : NSObject <UNUserNotificationCenterDelegate> {
    NSObject<OS_dispatch_queue> *_firstUseQueue;
    UNUserNotificationCenter *_userNotificationCenter;
    NSBundle *_bundle;
    int _bsmToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)displayAutoDisabledNotification;
- (void).cxx_destruct;
- (id)autoDisabledNotificationRequest;
- (id)init;
- (void)displayFirstUseNotification;
- (void)removeAutoDisabledNotification;

@end
