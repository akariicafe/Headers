@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {
    SBLockScreenPlugin *_plugin;
}

+ (BOOL)_pluginNeedsOverlay:(id)a0;

- (id)initWithPlugin:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)_newOverlayView;

@end
