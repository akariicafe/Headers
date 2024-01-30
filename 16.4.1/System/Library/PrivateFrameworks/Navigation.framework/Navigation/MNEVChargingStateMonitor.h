@class NSString, NSMeasurement, NSTimer, NSDate;
@protocol MNEVChargingStateMonitorDelegate;

@interface MNEVChargingStateMonitor : NSObject <MNVirtualGarageManagerObserver> {
    BOOL _isCharging;
    BOOL _shouldShowChargingInfo;
    NSDate *_arrivalDate;
    NSTimer *_timer;
}

@property (readonly, nonatomic) NSMeasurement *targetBatteryCharge;
@property (weak, nonatomic) id<MNEVChargingStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_startTimer;
- (void).cxx_destruct;
- (void)_notifyShouldShowChargingInfo;
- (void)_updateForVehicle:(id)a0 forceDelegateCallback:(BOOL)a1;
- (id)initWithTargetBatteryCharge:(id)a0;
- (void)updateForArrival;
- (void)updateForLocation:(id)a0;
- (void)virtualGarageManager:(id)a0 didUpdateSelectedVehicle:(id)a1;

@end
