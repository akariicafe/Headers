@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCSoundDetectionModuleViewControllerDelegate;

@interface AXCCSoundDetectionModuleViewController : CCUIMenuModuleViewController {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCSoundDetectionModuleViewControllerDelegate> soundDetectionDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)setContentModuleContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)contentModuleContext;
- (double)_calculateAmountOfVisibleItems;
- (void)_axSettingsDidChange;
- (BOOL)_isHeySiriRunning;
- (void)_showConfirmationAlertForType:(id)a0;
- (void)_confirmedEnableSoundDetection:(BOOL)a0;
- (void)_configureMenuItems;
- (void)_confirmedToggleSoundDetectionStatusForType:(id)a0;
- (void)_updateSoundDetectionState;
- (id)_confirmationAlertController;
- (void)_toggleSoundDetectionStatusForType:(id)a0;

@end
