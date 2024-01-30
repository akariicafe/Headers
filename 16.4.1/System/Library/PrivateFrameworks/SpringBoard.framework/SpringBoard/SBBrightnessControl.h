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
- (void)_resetIdleTimerForUserInteractionIfNecessary;
- (void)elasticBrightnessViewControllerValueUpdatesDidEnd:(id)a0;
- (id)initWithHUDController:(id)a0;
- (BOOL)_HUDIsDisplayable;
- (void)elasticBrightnessViewControllerValueUpdatesWillBegin:(id)a0;
- (void)_handleUpdateBrightnessIncrementKeyIsDown:(BOOL)a0 decrementKeyIsDown:(BOOL)a1;
- (BOOL)elasticValueViewController:(id)a0 updateCurrentValue:(float)a1;
- (id)acquireBrightnessHUDHiddenAssertionForReason:(id)a0;
- (void)brightnessController:(id)a0 performCoordinatedBrightnessChangeForIncrementKeyDown:(BOOL)a1 decrementKeyDown:(BOOL)a2;
- (void)_presentOrUpdateBrightnessHUDAsNecessaryForBrightnessLevel:(float)a0;
- (void)elasticHUDViewControllerRequestsDismissal:(id)a0;
- (id)_controllerForRoute:(long long)a0;
- (void)setBrightnessLevel:(float)a0 forRoute:(long long)a1;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0 forRoute:(long long)a1;
- (id)existingBrightnessHUDViewController;
- (void)setActiveController:(id)a0;
- (id)elasticHUDViewControllerRequestsLiveRendering:(id)a0 forReason:(id)a1;
- (void)cancelBrightnessKeyPressEvents;
- (float)elasticValueViewControllerCurrentValue:(id)a0;
- (id)presentedBrightnessHUDViewController;
- (id)activeDataSource;
- (void)_controlCenterWillPresent:(id)a0;
- (void).cxx_destruct;
- (long long)elasticBrightnessViewControllerBrightnessRouteType:(id)a0;

@end
