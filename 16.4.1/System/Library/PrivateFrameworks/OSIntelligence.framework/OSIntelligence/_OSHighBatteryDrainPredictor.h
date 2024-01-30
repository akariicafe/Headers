@class NSObject;
@protocol OS_os_log;

@interface _OSHighBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (double)getValue:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (double)getActivity:(id)a0;
- (int)batteryDrainPrediction:(id)a0 withChargeDuration:(double)a1;
- (double)getBattWeekdayPercentilePrior:(id)a0 forValue:(double)a1;
- (id)getDataWithStore:(id)a0;
- (double)getDistFromTotalMean:(id)a0 forValue:(double)a1;
- (double)getDrainSinceLastPlugin:(id)a0 forValue:(double)a1;
- (id)getFeatures:(id)a0;
- (double)getMaxBatt12:(id)a0;
- (double)getMeanActivity:(id)a0;
- (double)getMeanChargeDuration:(id)a0;
- (double)getMeanDailyPlugins:(id)a0;
- (double)getNEventsPrior:(int)a0;
- (double)getNetDrainSinceMax:(id)a0 forValue:(double)a1;
- (double)getRecentDrain15Min:(id)a0 forValue:(double)a1;
- (double)getRecentDrain1:(id)a0 forValue:(double)a1;
- (double)getRecentDrain3:(id)a0 forValue:(double)a1;
- (double)getStartTimeSeconds:(id)a0;
- (double)getUserMeanDrain:(id)a0;
- (BOOL)predictLowBatteryEventWithStore:(id)a0;

@end
