@class UIBarButtonItem, NSString, VUIAppInstallConfirmationView, VUIAppInstallLockup, UIButton;
@protocol WLKInstallable;

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {
    NSString *_updateTitle;
    NSString *_updateMessage;
}

@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (retain, nonatomic) VUIAppInstallConfirmationView *confirmationView;
@property (retain, nonatomic) id<WLKInstallable> installable;
@property (copy, nonatomic) id /* block */ cancelationHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ appStoreHandler;
@property (copy, nonatomic) id /* block */ secondaryLinkHandler;
@property (readonly, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) VUIAppInstallLockup *lockup;
@property (nonatomic) unsigned long long state;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)_handleCancel;
- (void)setTitle:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_handleAction;
- (id)initWithInstallable:(id)a0;
- (void)setUpdateTitle:(id)a0;
- (void)setUpdateMessage:(id)a0;
- (void)setSecondaryLinkTitle:(id)a0;
- (void)setPreInstallState;
- (void)setInstallingState;
- (void)_handleAppStore;
- (void)_handleSecondaryLink;
- (void)_fetchAppInfo;
- (id)_namedRatingWithRatings:(id)a0;
- (void)_fetchStoreInfoForAdamID:(id)a0 completion:(id /* block */)a1;
- (id)_fileSizeWithDeviceSizes:(id)a0;

@end
