@class NSUUID, NSAttributedString, NSArray, LTUISourceMeta, NSString, NSLocale, LTUIRemoteViewController, _UIRemoteViewController;

@interface LTUITranslationViewController : UIViewController <_UIRemoteViewControllerContaining, LTUIViewServiceExtensionHostProtocol> {
    unsigned long long extensionQueryID;
    unsigned long long cplID;
}

@property (class, readonly, getter=isAvailable) BOOL available;

@property (retain, nonatomic) id matchingToken;
@property (retain, nonatomic) NSUUID *requestID;
@property (retain, nonatomic) LTUIRemoteViewController *remoteViewController;
@property (nonatomic) BOOL userConsentConfirmed;
@property (nonatomic) BOOL consentDisplayOnly;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSLocale *sourceLocale;
@property (copy, nonatomic) NSLocale *targetLocale;
@property (copy, nonatomic) NSArray *ignoredAttributes;
@property (nonatomic) BOOL isSourceEditable;
@property (retain, nonatomic) LTUISourceMeta *sourceMeta;
@property (copy, nonatomic) id /* block */ replacementHandler;
@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)finishWithError:(id)a0;
- (void)dismiss;
- (void)willMoveToParentViewController:(id)a0;
- (id)_userInfo;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)_presentationControllerDidDismiss:(id)a0;
- (id)_sheetPresentationController;
- (void)_presentError:(id)a0;
- (void)_insertBackground;
- (void)_refreshExtensionList;
- (void)_removeBackground;
- (void)_setChildController:(id)a0;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)receiveExtensions:(id)a0;
- (void)remoteIsReady;

@end
