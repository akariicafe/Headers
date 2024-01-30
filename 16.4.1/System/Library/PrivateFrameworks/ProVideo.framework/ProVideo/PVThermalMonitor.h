@class NSObject;
@protocol OS_dispatch_queue;

@interface PVThermalMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasGoneAboveNominal;
@property (nonatomic) int currentThermalLevel;
@property (nonatomic) int highestThermalLevel;
@property (readonly, nonatomic) BOOL thermalLevelExceededNominal;
@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic) int highestThermalLevelReached;
@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_disabledThermalTracking;
- (void)_postNotificationPrevious:(int)a0 new:(int)a1;
- (void)_setCurrentThermalLevel:(int)a0;
- (BOOL)_updateThermalLevelsWithToken:(int)a0;
- (id)thermalLevelLabel;

@end
