@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>

@property (readonly, nonatomic) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)_updateLegibility;
- (void)viewDidLoad;
- (void)updateForPresentation:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationStyle;
- (id)coverSheetIdentifier;
- (long long)presentationPriority;
- (id)view;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidDisappear:(BOOL)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)displayLayoutElementIdentifier;
- (long long)presentationTransition;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willTransitionToPresented:(BOOL)a0;
- (long long)_presentationPriority;
- (void)pluginAppearanceDidChange:(id)a0;
- (id)initWithLockScreenPlugin:(id)a0;

@end
