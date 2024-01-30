@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCSoundDetectionModuleViewControllerDelegate;

@interface AXCCSoundDetectionModuleViewController : CCUIMenuModuleViewController {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCSoundDetectionModuleViewControllerDelegate> soundDetectionDelegate;

- (id)contentModuleContext;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (double)_calculateAmountOfVisibleItems;
- (void)_axSettingsDidChange;
- (BOOL)_isHeySiriRunning;
- (void)_showConfirmationAlertForType:(id)a0;
- (void)_confirmedEnableSoundDetection:(BOOL)a0;
- (void)_configureMenuItems;
- (void)_confirmedToggleSoundDetectionStatusForType:(id)a0;
- (void)_toggleSoundDetectionStatusForType:(id)a0;

@end
