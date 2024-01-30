@class SBDisplayBrightnessController, NSString, SBKeyboardBrightnessController, SBHUDController;
@protocol SBBrightnessRouteControlling;

@interface SBBrightnessControl : NSObject <SBBrightnessRouteCoordinating, SBElasticHUDViewControllerDelegate, SBElasticBrightnessDataSource> {
    SBHUDController *_HUDController;
    SBKeyboardBrightnessController *_keyboardBrightnessController;
    SBDisplayBrightnessController *_displayBrightnessController;
    id<SBBrightnessRouteControlling> _activeController;
    BOOL _controlCenterIsPresented;
    BOOL _brightnessIncrementKeyIsDown;
    BOOL _brightnessDecrementKeyIsDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesKeyCommandsForRoute:(long long)a0;

- (void)_controlCenterWillDismiss:(id)a0;
- (void)brightnessController:(id)a0 performCoordinatedBrightnessChangeForIncrementKeyDown:(BOOL)a1 decrementKeyDown:(BOOL)a2;
- (void)_handleUpdateBrightnessIncrementKeyIsDown:(BOOL)a0 decrementKeyIsDown:(BOOL)a1;
- (void)_presentOrUpdateBrightnessHUDAsNecessaryForBrightnessLevel:(float)a0;
- (void)setBrightnessLevel:(float)a0 forRoute:(long long)a1;
- (id)acquireBrightnessHUDHiddenAssertionForReason:(id)a0;
- (void)_resetIdleTimerForUserInteractionIfNecessary;
- (void)elasticBrightnessViewControllerValueUpdatesWillBegin:(id)a0;
- (id)_configureBrightnessHUDViewControllerWithLevel:(float)a0;
- (void)_controlCenterWillPresent:(id)a0;
- (long long)elasticBrightnessViewControllerBrightnessRouteType:(id)a0;
- (id)activeDataSource;
- (void)cancelBrightnessKeyPressEvents;
- (BOOL)elasticValueViewController:(id)a0 updateCurrentValue:(float)a1;
- (void).cxx_destruct;
- (BOOL)_HUDIsDisplayable;
- (void)elasticBrightnessViewControllerValueUpdatesDidEnd:(id)a0;
- (id)existingBrightnessHUDViewController;
- (id)presentedBrightnessHUDViewController;
- (void)setActiveController:(id)a0;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0 forRoute:(long long)a1;
- (id)initWithHUDController:(id)a0;
- (id)_controllerForRoute:(long long)a0;
- (float)elasticValueViewControllerCurrentValue:(id)a0;
- (void)elasticHUDViewControllerRequestsDismissal:(id)a0;

@end
