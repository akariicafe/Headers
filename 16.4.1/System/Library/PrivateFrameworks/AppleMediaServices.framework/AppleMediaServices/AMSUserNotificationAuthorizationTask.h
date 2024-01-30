@class UNUserNotificationCenter, NSString, AMSUserNotificationAuthorizationOptions;
@protocol AMSUserNotificationAuthorizationDelegate;

@interface AMSUserNotificationAuthorizationTask : AMSTask

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<AMSUserNotificationAuthorizationDelegate> delegate;
@property (retain, nonatomic) AMSUserNotificationAuthorizationOptions *options;

+ (id)_findEngagementRequestInResponse:(id)a0;
+ (id)engagementRequestForFullSheet;
+ (id)recordEngagementEventWithBundleIdentifier:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)_startEngagementAuthorizationWithResult:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1;
- (id)requestAuthorization;

@end
