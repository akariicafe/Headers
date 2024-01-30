@class NSString, VUIASDDialogObserver, VUIAppInstallConfirmationViewController;
@protocol WLKInstallable;

@interface VUIAppInstallerViewController : UINavigationController {
    id /* block */ _completionBlock;
    double _lastProgress;
    id /* block */ _progressBlock;
    VUIAppInstallConfirmationViewController *_confirmationController;
    VUIASDDialogObserver *_dialogObserver;
}

@property (readonly, nonatomic) id<WLKInstallable> installable;
@property (copy, nonatomic) NSString *localizedContentTitle;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (copy, nonatomic) NSString *confirmationBody;
@property (copy, nonatomic) NSString *updateBody;
@property (copy, nonatomic) NSString *updateTitle;
@property (copy, nonatomic) NSString *confirmationInstallButtonTitle;
@property (nonatomic) BOOL displayAppStoreLink;
@property (nonatomic) BOOL displaySecondaryLink;
@property (copy, nonatomic) NSString *secondaryLinkTitle;
@property (copy, nonatomic) id /* block */ secondaryLinkHandler;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithInstallable:(id)a0;
- (void)_dismissAppInstallWithCompletion:(id /* block */)a0;
- (void)_beginInstallingApp;
- (void)_initConfirmation;
- (void)_updateWithInstallProgress:(double)a0;
- (void)_finishInstallationWithCompletion:(id /* block */)a0;
- (void)beginInstallingAppWithProgressHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
