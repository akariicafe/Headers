@class ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)_initWithServiceBroker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)getFeedbackMetadataForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getFeedbackMetadataForBundleURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getLaunchInfoForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getLaunchInfoForBundleURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setFeedbackEnabled:(BOOL)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setLaunchScreenEnabled:(BOOL)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setLaunchInfo:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)submitFeedback:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)submitFeedback:(id)a0 bundleURL:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateTestNotes:(id)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)getDisplayNamesForBundleID:(id)a0;
- (id)getDisplayNamesForBundleURL:(id)a0;
- (id)getEmailAddressForBundleID:(id)a0;
- (id)getEmailAddressForBundleURL:(id)a0;
- (id)getLaunchInfoForBundleID:(id)a0;
- (id)getLaunchInfoForBundleURL:(id)a0;
- (id)getLaunchInfoForVersion:(id)a0;
- (BOOL)isFeedbackEnabledForBundleID:(id)a0;
- (BOOL)isFeedbackEnabledForBundleURL:(id)a0;
- (BOOL)isLaunchScreenEnabledForBundleID:(id)a0;
- (BOOL)isLaunchScreenEnabledForBundleURL:(id)a0;

@end
