@class NSString, NSMutableDictionary;

@interface WebAppNotificationCenterDelegate : NSObject <UNUserNotificationCenterDelegate> {
    NSMutableDictionary *_webAppViewControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDelegate;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)addWebAppViewController:(id)a0;
- (void)removeWebAppViewController:(id)a0;

@end
