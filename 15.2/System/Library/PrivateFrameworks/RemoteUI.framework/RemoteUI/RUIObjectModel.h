@class RUIElement, NSString, NSArray, NSURL, NSTimer, NSMutableDictionary, RUIPage, NSDictionary, NSMutableArray, RUIStyle, RUIAlertView;
@protocol RUIObjectModelDelegate;

@interface RUIObjectModel : NSObject <RemoteUIWebViewControllerDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate, RUIWebViewDelegate> {
    NSMutableArray *_displayedPages;
    int _currentPage;
    struct OpaqueJSContext { } *_ctx;
    NSTimer *_refreshTimer;
    RUIAlertView *_primaryAlert;
    NSMutableDictionary *_namedAlerts;
    NSMutableDictionary *_httpHeaders;
    NSString *_authPasswordEquivalent;
    NSString *_authPasswordFieldID;
    BOOL _parseFinished;
    id /* block */ _webViewDismissHandler;
}

@property (weak, nonatomic) id<RUIObjectModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *displayedPages;
@property (readonly, nonatomic) NSMutableArray *defaultPages;
@property (readonly, nonatomic) NSMutableDictionary *namedPages;
@property (readonly, nonatomic) NSArray *allPages;
@property (readonly, nonatomic) RUIPage *visiblePage;
@property (readonly, nonatomic) RUIElement *activeElement;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *scriptURL;
@property (copy, nonatomic) NSString *inlineScript;
@property (copy, nonatomic) NSString *validationFunction;
@property (copy, nonatomic) NSDictionary *clientInfo;
@property (copy, nonatomic) NSDictionary *serverInfo;
@property (copy, nonatomic) NSDictionary *updateInfo;
@property (nonatomic) int refreshDelay;
@property (copy, nonatomic) NSString *refreshURL;
@property (nonatomic) long long nextButtonStyle;
@property (retain, nonatomic) RUIStyle *style;
@property (readonly, nonatomic) RUIAlertView *primaryAlert;
@property (copy, nonatomic) NSString *identifierMarkingStackRemovalAfterPush;
@property (readonly, nonatomic) NSArray *pages;
@property (retain, nonatomic) NSDictionary *alert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_enableTestMode;
+ (id)objectModelForXMLNamed:(id)a0;

- (BOOL)goBack;
- (void)back:(id)a0;
- (id)alertController;
- (BOOL)goBack:(BOOL)a0;
- (id)absoluteURLWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_parentViewController;
- (void)setPages:(id)a0;
- (BOOL)validateWithFunction:(id)a0;
- (void)populatePostbackDictionary:(id)a0;
- (void)presentInParentViewController:(id)a0 animated:(BOOL)a1;
- (void)presentWithBlock:(id /* block */)a0;
- (id)postbackDictionary;
- (id)_parentNavigationController;
- (void)startNavigationBarSpinnerWithTitle:(id)a0;
- (void)stopNavigationBarSpinner;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (id)newNavigationControllerForPresentation;
- (id)postbackData;
- (id)elementsWithName:(id)a0;
- (id)subElementWithID:(id)a0;
- (void)activateElement:(id)a0 completion:(id /* block */)a1;
- (void)presentInParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)RUIPage:(id)a0 toggledEditing:(BOOL)a1;
- (void)RUIPage:(id)a0 pressedNavBarButton:(id)a1;
- (void)tableViewOMDidChange:(id)a0;
- (void)cleanupRefreshTimer;
- (void)pageDidDisappear:(id)a0;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)a0;
- (id)rowForFormField:(id)a0;
- (void)openLink:(id)a0 HTTPMethod:(id)a1 completion:(id /* block */)a2;
- (void)showModalWebViewWithLinkURL:(id)a0 dismissButtonLabel:(id)a1 dismissButtonAlignment:(id)a2 scaleToFit:(BOOL)a3 loadCompletion:(id /* block */)a4 dismissHandler:(id /* block */)a5;
- (void)setJSGlobalContext:(struct OpaqueJSContext { } *)a0;
- (void)_navigateToNextPageAnimated;
- (void)_handleLinkPress:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
- (void)_populatePageNavItem:(id)a0 withNextButton:(BOOL)a1;
- (void)refreshTimeout;
- (id)_firstPageForPresentation;
- (void)presentPage:(id)a0 inViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(BOOL)a0;
- (void)_navigateBackWithPop:(BOOL)a0 fromViewController:(id)a1;
- (void)_unsafe_setPages:(id)a0;
- (void)navigateToNextPageAnimated:(BOOL)a0;
- (void)_displayNamedPage:(id)a0 animated:(BOOL)a1;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)a0;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)a0;
- (id)invokeScriptFunction:(id)a0 withArguments:(id)a1;
- (BOOL)hasAttributeOrAttributeFunctionNamed:(id)a0 withAttributes:(id)a1;
- (BOOL)hasConfirmationAttributes:(id)a0;
- (BOOL)hasSecondConfirmationAttributes:(id)a0;
- (void)_presentSecondConfirmationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)_presentConfirmationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (id)stringForAttributeName:(id)a0 withAttributes:(id)a1;
- (id)textInRowWithIdentifier:(id)a0;
- (void)handleElementChange:(id)a0 action:(int)a1 completion:(id /* block */)a2;
- (void)_handleElementChange:(id)a0 completion:(id /* block */)a1;
- (void)handleAppleIDAuthenticationIfNeededForAttributes:(id)a0 completion:(id /* block */)a1;
- (void)presentConfirmationIfNeededForElement:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldDisplayNamedElement:(id)a0 page:(id)a1;
- (id)_pageContainingTableView:(id)a0;
- (void)remoteUIWebViewController:(id)a0 dismissWithPayload:(id)a1;
- (void)remoteUIWebViewControllerDidDismiss:(id)a0;
- (BOOL)tableViewOM:(id)a0 deleteRowAtIndexPath:(id)a1;
- (void)tableViewOMSubmitForm:(id)a0;
- (void)tableViewOM:(id)a0 elementDidChange:(id)a1 action:(int)a2 completion:(id /* block */)a3;
- (void)passcodeViewOM:(id)a0 activatedElement:(id)a1 completion:(id /* block */)a2;
- (void)alertView:(id)a0 pressedButton:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewOM:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)parseDidFinish;
- (void)_displaySupplementalPage:(id)a0;
- (void)didNavigateBackFromViewController:(id)a0;
- (void)_populateRequest:(id)a0;
- (void)refreshWithObjectModel:(id)a0;
- (void)addAlertElement:(id)a0;
- (void)configureTableView:(id)a0;
- (void)configureRow:(id)a0;
- (void)configureSection:(id)a0;
- (Class)customHeaderClassForSection:(id)a0;
- (Class)customFooterClassForSection:(id)a0;
- (Class)customTableCellClassForTableViewRow:(id)a0;
- (id)tableHeaderViewForAttributes:(id)a0;
- (id)tableFooterViewForAttributes:(id)a0;
- (id)relativeURLWithString:(id)a0;
- (void)runScript;
- (BOOL)prepareScriptContext;
- (void)_logException:(struct OpaqueJSValue { } *)a0;
- (id)objectForJSValue:(struct OpaqueJSValue { } *)a0;

@end
