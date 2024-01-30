@class CPSTemplateEnvironment, NSString, CPTemplate, NAFuture, UITapGestureRecognizer;
@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPSTemplateEnvironmentDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable>

@property (nonatomic) BOOL isPopping;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) BOOL isNowPlayingApp;
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (weak, nonatomic) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NAFuture *templateProviderFuture;

- (void)_cleanup;
- (BOOL)gestureRecognizer:(id)a0 shouldReceivePress:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (void)invalidate;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_updateTrailingBarButtons;
- (void)didSelectButton:(id)a0;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (void)setHostBackButton:(id)a0;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (void)setControl:(id)a0 selected:(BOOL)a1;
- (void)setBarButton:(id)a0 image:(id)a1;
- (void)setBarButton:(id)a0 title:(id)a1;
- (id)initWithTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (void)_viewDidLoad;
- (void)_dismissTemplateViewController;
- (void)_backGestureFired:(id)a0;
- (void)_cps_viewControllerWasPopped;
- (void)applicationDidBecomeNowPlayingApp:(BOOL)a0;
- (void)_updateTemplate:(id)a0;
- (void)_updateLeadingBarButtons;
- (void)_addGestureRecognizerIfNecessary;
- (void)_nowPlayingButtonTapped:(id)a0;
- (id)_barButtonItemForBarButton:(id)a0;
- (BOOL)_wantsNowPlayingButton;
- (id)_nowPlayingBarButtonItem;
- (id)_barButtonItemForIdentifier:(id)a0;

@end
