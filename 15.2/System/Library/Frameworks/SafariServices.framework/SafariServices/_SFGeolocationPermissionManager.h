@class UIWebGeolocationPolicyDecider, CLLocationManager;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {
    UIWebGeolocationPolicyDecider *_policyDecider;
    CLLocationManager *_locationManager;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)requestPermissionForURL:(id)a0 frame:(id)a1 dialogPresenter:(id)a2 completionHandler:(id /* block */)a3;
- (void)_showDialogRequestingPermissionForURL:(id)a0 frame:(id)a1 dialogPresenter:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)hasPreciseLocationPermission;

@end
