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
+ (id)stringFromThermalPressureLevel:(int)a0;
+ (void)enumerateThermalPressureLevel:(id /* block */)a0;

- (void)_postNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_disabledThermalTracking;
- (BOOL)_updateThermalLevelsWithToken:(int)a0;
- (id)thermalLevelLabel;
- (id)_analyticValueForThermalLevelBefore:(int)a0 after:(int)a1;

@end
