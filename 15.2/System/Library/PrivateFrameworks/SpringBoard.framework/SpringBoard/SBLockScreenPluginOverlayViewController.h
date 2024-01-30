@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {
    SBLockScreenPlugin *_plugin;
}

+ (BOOL)_pluginNeedsOverlay:(id)a0;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithPlugin:(id)a0;
- (id)_newOverlayView;

@end
