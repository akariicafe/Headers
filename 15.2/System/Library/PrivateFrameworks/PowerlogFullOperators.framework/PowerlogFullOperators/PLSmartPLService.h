@class NSMutableDictionary;

@interface PLSmartPLService : PLService

@property (retain) NSMutableDictionary *smartPLHelpers;

+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionSmartTrigger;
+ (id)entryEventPointDefinitionSample;

- (void).cxx_destruct;
- (id)init;
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
