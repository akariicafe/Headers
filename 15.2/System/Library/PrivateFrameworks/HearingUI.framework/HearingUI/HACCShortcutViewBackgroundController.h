@class CCUILabeledRoundButtonViewController, AXDispatchTimer, NSMutableArray, MediaControlsBluetoothListeningModeButton;
@protocol HACCShortcutViewBackgroundDelegate;

@interface HACCShortcutViewBackgroundController : CCUICustomContentModuleBackgroundViewController {
    AXDispatchTimer *_noiseControlUpdateTimer;
}

@property (retain, nonatomic) CCUILabeledRoundButtonViewController *listeningModeButtonController;
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *listeningModeButton;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *deviceToggleButtonController;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *liveListenButtonController;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *comfortSoundsButtonController;
@property (retain, nonatomic) NSMutableArray *controls;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (weak, nonatomic) id<HACCShortcutViewBackgroundDelegate> delegate;

- (id)listeningMode;
- (BOOL)_canShowWhileLocked;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (double)footerHeight;
- (BOOL)setListeningMode:(id)a0;
- (void)reset;
- (void)updateNoiseControl:(id)a0;
- (void)updateComfortSoundsButtonStatus;
- (void)otherDeviceButtonTapped:(id)a0;
- (void)listeningModeButtonDidUpdateValue:(id)a0;
- (void)liveListenButtonTapped:(id)a0;
- (void)comfortSoundsButtonTapped:(id)a0;
- (void)updateFooterLayout;

@end
