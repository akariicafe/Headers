@class SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView, SBLockScreenPlugin, SBLockScreenPluginOverlayViewController;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}

@property (readonly, retain, nonatomic) SBLockScreenPlugin *plugin;

- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithPlugin:(id)a0;

@end
