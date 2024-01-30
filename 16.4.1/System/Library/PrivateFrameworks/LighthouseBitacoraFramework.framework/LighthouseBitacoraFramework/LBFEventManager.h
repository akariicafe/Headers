@class LBFBiomeManager;

@interface LBFEventManager : NSObject

@property (retain, nonatomic) LBFBiomeManager *biomeManagerLighthouse;
@property (retain, nonatomic) LBFBiomeManager *biomeManagerTrial;
@property (retain, nonatomic) LBFBiomeManager *biomeManagerMLRuntimed;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addMLRuntimedEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;
- (BOOL)addTrialdEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;
- (BOOL)isEqualIdentifiers:(id)a0 identifiers:(id)a1;
- (BOOL)addLighthousePluginEvent:(id)a0;
- (BOOL)addLighthousePluginEvent:(id)a0 identifiers:(id)a1 error:(id *)a2;
- (id)convertToLBFTrialIdentifiers:(id)a0;
- (id)ensureBiomeManagerLighthouse;
- (id)ensureBiomeManagerMLRuntimed;
- (id)ensureBiomeManagerTrial;
- (void)enumerateLastLighthousePluginEvents:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldContinue:(id /* block */)a3;
- (void)enumerateLastMLRuntimeEvents:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldContinue:(id /* block */)a3;
- (void)enumerateLastTrialEvents:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldContinue:(id /* block */)a3;
- (id)getLastLighthousePluginEvent:(id)a0;
- (id)getLastMLRuntimeEvent:(id)a0;
- (id)getLastTrialEvent:(id)a0;

@end
