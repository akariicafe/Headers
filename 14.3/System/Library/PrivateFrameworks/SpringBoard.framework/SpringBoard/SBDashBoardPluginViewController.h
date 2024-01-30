@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>

@property (readonly, nonatomic) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (long long)presentationStyle;
- (void)_updateLegibility;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (id)coverSheetIdentifier;
- (id)view;
- (BOOL)handleEvent:(id)a0;
- (void)updateForPresentation:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)willTransitionToPresented:(BOOL)a0;
- (long long)_presentationPriority;
- (void)pluginAppearanceDidChange:(id)a0;
- (id)initWithLockScreenPlugin:(id)a0;

@end
