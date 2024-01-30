@class NSString, WLKNotificationCenter;

@interface VUIJSNotificationCenter : IKJSObject <WLKNotificationCenterDelegate, VUIJSNotificationCenter> {
    WLKNotificationCenter *_center;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showSignupAlertPushNotificationWithAppContext:(id)a0;
+ (void)showAppInstallCompletePushNotificationWithAppContext:(id)a0 appName:(id)a1 contentName:(id)a2 punchoutURL:(id)a3;

- (void).cxx_destruct;
- (void)setBadgeNumber:(id)a0;
- (void)post:(id)a0 :(id)a1 :(id)a2 :(id)a3;
- (void)setBadgeString:(id)a0;
- (id)initWithAppContext:(id)a0;
- (void)handleAction:(id)a0;

@end
