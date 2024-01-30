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
- (BOOL)setListeningMode:(id)a0;
- (void)update;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)footerHeight;
- (void)updateComfortSoundsButtonStatus;
- (void)comfortSoundsButtonTapped:(id)a0;
- (void)listeningModeButtonDidUpdateValue:(id)a0;
- (void)liveListenButtonTapped:(id)a0;
- (void)otherDeviceButtonTapped:(id)a0;
- (void)updateFooterLayout;
- (void)updateNoiseControl:(id)a0;

@end
