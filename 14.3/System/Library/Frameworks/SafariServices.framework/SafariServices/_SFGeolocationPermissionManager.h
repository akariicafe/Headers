@class UIWebGeolocationPolicyDecider, CLLocationManager;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {
    UIWebGeolocationPolicyDecider *_policyDecider;
    CLLocationManager *_locationManager;
}

+ (id)sharedManager;

- (BOOL)hasPreciseLocationPermission;
- (void).cxx_destruct;
- (void)_showDialogRequestingPermissionForURL:(id)a0 frame:(id)a1 dialogPresenter:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestPermissionForURL:(id)a0 frame:(id)a1 dialogPresenter:(id)a2 completionHandler:(id /* block */)a3;

@end
