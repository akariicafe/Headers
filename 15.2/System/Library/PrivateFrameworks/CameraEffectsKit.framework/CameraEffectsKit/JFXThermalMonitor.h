@class NSObject;
@protocol OS_dispatch_queue;

@interface JFXThermalMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasGoneAboveNominal;
@property (nonatomic) int currentThermalLevel;
@property (nonatomic) int highestThermalLevel;
@property (readonly, nonatomic) BOOL thermalLevelExceededNominal;
@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic) int highestThermalLevelReached;

+ (id)sharedInstance;
+ (void)enumerateThermalPressureLevel:(id /* block */)a0;
+ (id)stringFromThermalPressureLevel:(int)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_postNotification:(id)a0;
- (BOOL)_updateThermalLevelsWithToken:(int)a0;
- (id)_analyticValueForThermalLevelBefore:(int)a0 after:(int)a1;
- (BOOL)_disabledThermalTracking;
- (id)thermalLevelLabel;

@end
