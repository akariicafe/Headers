@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>

@property (readonly, nonatomic) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (id)_newDisplayLayoutElement;
- (void)updateForPresentation:(id)a0;
- (void)_updateLegibility;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)view;
- (long long)presentationTransition;
- (id)succinctDescriptionBuilder;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidLoad;
- (void)aggregateBehavior:(id)a0;
- (id)coverSheetIdentifier;
- (void)viewDidDisappear:(BOOL)a0;
- (void)aggregateAppearance:(id)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)willTransitionToPresented:(BOOL)a0;
- (long long)_presentationPriority;
- (id)initWithLockScreenPlugin:(id)a0;
- (void)pluginAppearanceDidChange:(id)a0;

@end
