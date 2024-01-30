@class SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView, SBLockScreenPlugin, SBLockScreenPluginOverlayViewController;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}

@property (readonly, retain, nonatomic) SBLockScreenPlugin *plugin;

- (id)initWithPlugin:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (void).cxx_destruct;
- (void)loadView;

@end
