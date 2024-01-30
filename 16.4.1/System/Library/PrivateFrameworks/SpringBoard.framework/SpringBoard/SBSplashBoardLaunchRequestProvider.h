@class NSString, SBApplicationController, FBSDisplayConfiguration;

@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding> {
    SBApplicationController *_applicationController;
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplicationController:(id)a0 displayConfiguration:(id)a1;
- (id)launchRequestsForApplication:(id)a0 withCompatibilityInfo:(id)a1 defaultLaunchRequests:(id)a2;

@end
