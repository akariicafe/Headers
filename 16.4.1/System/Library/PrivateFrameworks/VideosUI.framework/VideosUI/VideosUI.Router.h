@interface VideosUI.Router : NSObject <SKAccountPageViewControllerDelegate, VUIControllerPresenter> {
    void /* unknown type, empty encoding */ topMostDocument;
    void /* unknown type, empty encoding */ currentTransaction;
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ presentingRoute;
    void /* unknown type, empty encoding */ managedRoutes;
    void /* unknown type, empty encoding */ tabSwitchSubject;
}

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)accountPageViewControllerDidFinish:(id)a0;
- (BOOL)dismissViewControllerWithID:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleAccountSettingsEventWithUrl:(id)a0 amsBagKey:(id)a1 useAMSWebView:(BOOL)a2;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 actions:(id)a2 animated:(BOOL)a3;
- (void)presentViewController:(id)a0 modalPresentationStyle:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
