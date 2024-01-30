@class NSMutableDictionary;

@interface PLSmartPLService : PLService

@property (retain) NSMutableDictionary *smartPLHelpers;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSmartTrigger;
+ (id)entryEventPointDefinitionSample;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)logEventPointHeapForProcessName:(id)a0;
- (void)logEventPointVMMapForProcessName:(id)a0;
- (void)logEventPointStackShotWithReason:(id)a0;
- (void)logEventPointSampleForProcessName:(id)a0;
- (void)logEventPointSmartPLFiredFromAuxilary:(Class)a0 withReason:(id)a1;
- (void)logEventPointHeap;
- (void)logEventPointVMMap;
- (void)logEventPointStackShot;
- (void)logEventPointSample;
- (void)vmmapProcessName:(id)a0;

@end
