@class NSMutableDictionary;

@interface DTCADebugService : DTGraphicsService

@property (retain, nonatomic) NSMutableDictionary *enabledSwitches;

+ (void)registerCapabilities:(id)a0;

- (void)cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)valueForSwitch:(id)a0;
- (void)cleanupSwitches;
- (void)_collectData;
- (BOOL)_switchNamed:(id)a0 toDebugOption:(unsigned int *)a1;
- (id)availableStatistics;
- (id)driverNames;
- (void)setValue:(id)a0 forSwitchName:(id)a1;

@end
