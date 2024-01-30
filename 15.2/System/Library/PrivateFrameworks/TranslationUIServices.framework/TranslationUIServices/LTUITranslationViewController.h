@class LTUIRemoteViewController, NSUUID, NSArray, LTUISourceMeta, _UIRemoteViewController, NSAttributedString, NSString;

@interface LTUITranslationViewController : UIViewController <_UIRemoteViewControllerContaining, LTUIViewServiceExtensionHostProtocol> {
    unsigned long long extensionQueryID;
    unsigned long long cplID;
}

@property (class, readonly, getter=isAvailable) BOOL available;

@property (retain, nonatomic) id matchingToken;
@property (retain, nonatomic) NSUUID *requestID;
@property (retain, nonatomic) LTUIRemoteViewController *remoteViewController;
@property (copy, nonatomic) NSAttributedString *text;
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

- (void)didReceiveMemoryWarning;
- (void)finishWithError:(id)a0;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)dismiss;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_sheetPresentationController;
- (id)_userInfo;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_presentationControllerDidDismiss:(id)a0;
- (void)_presentError:(id)a0;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)_refreshExtensionList;
- (void)receiveExtensions:(id)a0;
- (void)_setChildController:(id)a0;

@end
