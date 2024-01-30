@class UIColor, NSString, NSSet, CSCoverSheetViewController, SBDashBoardPluginViewController, SBLockScreenPluginManager, _UILegibilitySettings;
@protocol SBLockScreenActionProvider;

@interface SBDashBoardPluginController : NSObject <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting> {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardPluginViewController *_pluginViewController;
    long long _pluginViewControllerPresentationStyle;
    SBLockScreenPluginManager *_pluginManager;
}

@property (readonly, nonatomic) id<SBLockScreenActionProvider> lockScreenActionProvider;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;

- (id)initWithCoverSheetViewController:(id)a0;
- (void)_deactivate;
- (void)conformsToCSAppearanceProviding;
- (void)pluginManager:(id)a0 activePluginDidChange:(id)a1;
- (void).cxx_destruct;
- (void)pluginManager:(id)a0 displayedPluginDidChangeFromPlugin:(id)a1 toPlugin:(id)a2;
- (void)dealloc;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSEventHandling;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)pluginManager:(id)a0 willUnloadPlugin:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (BOOL)pluginManager:(id)a0 plugin:(id)a1 handleAction:(id)a2;
- (void)_activate;
- (void)pluginManager:(id)a0 displayedPluginDidUpdateAppearance:(id)a1;
- (void)pluginManager:(id)a0 didLoadPlugin:(id)a1;
- (void)_setPluginViewController:(id)a0;
- (void)_dismissPluginViewController:(id)a0 withStyle:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)enableLockScreenPluginWithContext:(id)a0;
- (void)disableLockScreenPluginWithContext:(id)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (void)_presentPluginViewController:(id)a0 withStyle:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;

@end
