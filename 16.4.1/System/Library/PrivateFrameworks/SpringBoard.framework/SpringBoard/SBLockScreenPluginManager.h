@class NSString, NSMutableDictionary, CSLockScreenTestPluginSettings, SBLockScreenPlugin;
@protocol SBLockScreenPluginManagerDelegate;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider> {
    NSMutableDictionary *_plugins;
    CSLockScreenTestPluginSettings *_testSettings;
}

@property (readonly, nonatomic) SBLockScreenPlugin *activePlugin;
@property (readonly, nonatomic) SBLockScreenPlugin *displayedPlugin;
@property (weak, nonatomic) id<SBLockScreenPluginManagerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)disableLockScreenPluginWithContext:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)pluginController:(id)a0 updateAppearance:(id)a1;
- (BOOL)handleEvent:(long long)a0;
- (id)_pluginForPluginController:(id)a0;
- (BOOL)_handlePluginDisabled:(id)a0 withContext:(id)a1;
- (BOOL)_loadLockScreenPluginWithContext:(id)a0;
- (void)_setActivePlugin:(id)a0 displayedPlugin:(id)a1;
- (id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)a0;
- (void)dealloc;
- (BOOL)pluginController:(id)a0 sendAction:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_refreshLockScreenPlugin;
- (BOOL)enableLockScreenPluginWithContext:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_handleUIRelock;
- (void)activatePluginController:(id)a0;
- (BOOL)_sendEventToPlugin:(id /* block */)a0;
- (void)deactivatePluginController:(id)a0;
- (void).cxx_destruct;
- (id)lockScreenActionContext;

@end
