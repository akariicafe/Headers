@class NSTimer, NSMeasurement, NSDate;
@protocol MNEVChargingStateMonitorDelegate;

@interface MNEVChargingStateMonitor : NSObject <VGVirtualGarageObserver> {
    BOOL _shouldShowChargingInfo;
    NSDate *_startDate;
    NSTimer *_timer;
}

@property (readonly, nonatomic) NSMeasurement *targetBatteryCharge;
@property (weak, nonatomic) id<MNEVChargingStateMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_startTimer;
- (void)updateForLocation:(id)a0;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)_consumeUpdatedVirtualGarage:(id)a0 forceDelegateCallback:(BOOL)a1;
- (void)_notifyShouldShowChargingInfo;
- (id)initWithTargetBatteryCharge:(id)a0;

@end
