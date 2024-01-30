@class NSArray, NSMutableArray, NSString;

@interface BCUIAvocadoViewController : UIViewController {
    BOOL _batteryDeviceViewsValid;
    NSMutableArray *_batteryDeviceViews;
}

@property (readonly, copy, nonatomic, getter=_batteryDeviceViews) NSMutableArray *batteryDeviceViews;
@property (readonly, nonatomic, getter=_maximumNumberOfBatteryDeviceViews) unsigned long long maximumNumberOfBatteryDeviceViews;
@property (readonly, nonatomic, getter=_includeEmptyDevices) BOOL includeEmptyDevices;
@property (copy, nonatomic) NSArray *batteryDevices;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (void)initialize;
+ (id)avocadoViewControllerForSize:(long long)a0;

- (void)viewWillLayoutSubviews;
- (id)_newBatteryDeviceView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_synthesizedDebugIdentifier;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;
- (void)invalidateBatteryDeviceState;
- (void)_validateBatteryDeviceViewsIfNecessary;

@end
