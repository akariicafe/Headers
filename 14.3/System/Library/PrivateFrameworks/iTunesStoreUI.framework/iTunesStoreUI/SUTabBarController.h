@class SUClientInterface, NSString, NSArray, UIImage, SUViewController, SUNavigationBarBackgroundView, SUPreviewOverlayViewController, NSMutableArray, UIViewController;
@protocol SUTabBarControllerDelegate;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory> {
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    long long _reloadingUnderneathTransientControllerCount;
    BOOL _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    long long _storeBarStyle;
    SUNavigationBarBackgroundView *_tabBarBackdropView;
}

@property (readonly, nonatomic, getter=_previewOverlayViewController) SUPreviewOverlayViewController *_previewOverlayViewController;
@property (readonly, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic) id<SUTabBarControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *selectedIdentifier;
@property (retain, nonatomic) NSString *moreListTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_moreNavigationControllerClass;

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)init;
- (void)tabBar:(id)a0 willShowCustomizationSheet:(id)a1 withNavigationBar:(id)a2;
- (void)dealloc;
- (id)_timingFunctionForAnimation;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)tabBar:(id)a0 willEndCustomizingItems:(id)a1 changed:(BOOL)a2;
- (id)_sectionForIdentifier:(id)a0;
- (void)tabBar:(id)a0 didEndCustomizingItems:(id)a1 changed:(BOOL)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)selectedViewController;
- (id)rotatingHeaderView;
- (void)viewDidAppear:(BOOL)a0;
- (id)rotatingFooterView;
- (void)setTransientViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setSelectedViewController:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)window:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (void)_longPressAction:(id)a0;
- (void)cancelTransientViewController:(id)a0;
- (id)initWithClientInterface:(id)a0;
- (void)_applicationDidChangeStatusBarFrame:(id)a0;
- (void)_partnerChanged:(id)a0;
- (id)_viewControllerForContext:(id)a0;
- (id)_rootViewControllerForSection:(id)a0;
- (BOOL)loadFromDefaults;
- (void)setSectionOrdering:(id)a0;
- (void)_restoreArchivedContexts:(id)a0;
- (void)_restoreOverlayContexts:(id)a0;
- (void)_restoreArchivedTransientContexts:(id)a0;
- (void)_moveTransientViewController:(id)a0 toSectionWithIdentifier:(id)a1 asRoot:(BOOL)a2;
- (void)_reloadViewControllersFromSections:(id)a0 animated:(BOOL)a1;
- (void)resetUserDefaults;
- (void)selectDefaultSection;
- (BOOL)saveOrderingToDefaults;
- (BOOL)_saveNavigationPathToDefaults;
- (BOOL)_saveTransientNavigationPathToDefaults;
- (void)_applyMoreListConfiguration;
- (id)overlayBackgroundViewController;
- (BOOL)_isReloadingUnderneathTransientViewController;
- (long long)ITunesStoreUIBarStyle;
- (void)_setStoreBarStyle:(long long)a0;
- (void)_fixupViewControllers;
- (void)_moveView:(id)a0 toView:(id)a1;
- (void)_transitionSafeHandlePartnerChange:(id)a0;
- (id)viewControllerForSectionIdentifier:(id)a0;
- (BOOL)presentOverlayBackgroundViewController:(id)a0;
- (id)_archivedContextsForViewController:(id)a0;
- (void)_beginReloadingUnderneathTransientViewController;
- (void)_endReloadingUnderneathTransientViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)a0;
- (BOOL)loadFromDefaultsAndSetSections:(id)a0;
- (void)pushTransientViewController:(id)a0 onSectionWithIdentifier:(id)a1;
- (void)reloadSectionVisibilityAnimated:(BOOL)a0;
- (void)reloadSectionWithIdentifier:(id)a0 URL:(id)a1;
- (void)resetToSystemDefaults;
- (BOOL)saveToDefaults;
- (void)selectSectionOfType:(long long)a0;
- (void)setMoreListSelectedImage:(id)a0 unselectedImage:(id)a1;
- (void)setTransientViewController:(id)a0 onSectionWithIdentifier:(id)a1;
- (id)_sectionForViewController:(id)a0;
- (void)dismissOverlayBackgroundViewController;
- (unsigned long long)indexOfViewControllerWithSectionType:(long long)a0;
- (id)viewControllerForSectionType:(long long)a0;
- (void)_hidePreviewOverlayAnimated:(BOOL)a0;
- (void)_showPreviewOverlay:(id)a0 animated:(BOOL)a1;
- (void)_fixupTabBarSelection;
- (id)_sectionForType:(long long)a0;

@end
