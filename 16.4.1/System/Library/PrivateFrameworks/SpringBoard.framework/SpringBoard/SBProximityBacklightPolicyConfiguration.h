@class SBBacklightController, SBProximitySettings, SBHIDUISensorModeController, SBSystemGestureManager;

@interface SBProximityBacklightPolicyConfiguration : NSObject

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBHIDUISensorModeController *sensorModeController;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) SBProximitySettings *proximitySettings;

- (void).cxx_destruct;

@end
