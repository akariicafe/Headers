@class VUIAppInstallConfirmationViewController, NSString, NSURL, VUIASDDialogObserver;
@protocol WLKInstallable;

@interface VUIAppInstallerViewController : UINavigationController

@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double lastProgress;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) VUIAppInstallConfirmationViewController *confirmationController;
@property (retain, nonatomic) VUIASDDialogObserver *dialogObserver;
@property (retain, nonatomic) NSURL *punchoutURL;
@property (readonly, nonatomic) id<WLKInstallable> installable;
@property (copy, nonatomic) NSString *localizedContentTitle;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (copy, nonatomic) NSString *confirmationBody;
@property (copy, nonatomic) NSString *updateBody;
@property (copy, nonatomic) NSString *updateTitle;
@property (copy, nonatomic) NSString *confirmationInstallButtonTitle;
@property (nonatomic) BOOL displayAppStoreLink;
@property (nonatomic) BOOL displaySecondaryLink;
@property (copy, nonatomic) NSString *secondaryLinkTitle;
@property (copy, nonatomic) id /* block */ secondaryLinkHandler;

- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)initWithInstallable:(id)a0;
- (id)initWithInstallable:(id)a0 punchoutURL:(id)a1;
- (void)beginInstallingAppWithProgressHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_dismissAppInstallWithCompletion:(id /* block */)a0;
- (void)_beginInstallingApp;
- (void)_initConfirmation;
- (void)_updateWithInstallProgress:(double)a0;
- (void)_finishInstallationWithCompletion:(id /* block */)a0;

@end
