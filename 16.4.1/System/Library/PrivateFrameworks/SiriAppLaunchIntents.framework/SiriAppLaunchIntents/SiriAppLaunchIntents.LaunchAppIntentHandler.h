@class LaunchAppApplicationResolutionResult, LaunchAppIntent, LaunchAppIntentResponse;

@interface SiriAppLaunchIntents.LaunchAppIntentHandler : NSObject <LaunchAppIntentHandling> {
    void /* unknown type, empty encoding */ appsSearcher;
    void /* unknown type, empty encoding */ installedApps;
    void /* unknown type, empty encoding */ carPlaySupportProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmLaunchApp:(LaunchAppIntent *)a0 completion:(void (^)(LaunchAppIntentResponse *))a1;
- (void)handleLaunchApp:(LaunchAppIntent *)a0 completion:(void (^)(LaunchAppIntentResponse *))a1;
- (void)resolveApplicationForLaunchApp:(LaunchAppIntent *)a0 withCompletion:(void (^)(LaunchAppApplicationResolutionResult *))a1;

@end
