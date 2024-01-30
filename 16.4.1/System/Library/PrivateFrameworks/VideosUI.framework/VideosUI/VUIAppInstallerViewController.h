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

- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)_beginInstallingApp;
- (void)_dismissAppInstallWithCompletion:(id /* block */)a0;
- (void)_finishInstallationWithCompletion:(id /* block */)a0;
- (void)_initConfirmation;
- (void)_updateWithInstallProgress:(double)a0;
- (void)beginInstallingAppWithProgressHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithInstallable:(id)a0;
- (id)initWithInstallable:(id)a0 punchoutURL:(id)a1;

@end
