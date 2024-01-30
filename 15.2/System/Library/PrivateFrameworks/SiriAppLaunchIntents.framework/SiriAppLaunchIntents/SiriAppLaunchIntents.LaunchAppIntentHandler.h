@interface SiriAppLaunchIntents.LaunchAppIntentHandler : NSObject <LaunchAppIntentHandling> {
    void /* unknown type, empty encoding */ appsSearcher;
    void /* unknown type, empty encoding */ installedApps;
    void /* unknown type, empty encoding */ carPlaySupportProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveApplicationForLaunchApp:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmLaunchApp:(id)a0 completion:(id /* block */)a1;
- (void)handleLaunchApp:(id)a0 completion:(id /* block */)a1;

@end
