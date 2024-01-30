@interface iCloudQuotaUI.RemoteExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostViewController;
    void /* unknown type, empty encoding */ appExtension;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;

@end
