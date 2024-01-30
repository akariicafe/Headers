@class NSString, AMDModelStore, AMDOutputBuilder, NSDictionary, NSNumber, AMDInputBuilder;

@interface AMDUseCaseWorkflowImplementation : NSObject <AMDUseCaseWorkflow>

@property (retain, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *coldstartModelId;
@property (retain, nonatomic) NSString *modelFormat;
@property (retain, nonatomic) AMDModelStore *modelStore;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSNumber *maxItemsToDisplay;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) AMDInputBuilder *inputBuilder;
@property (retain, nonatomic) AMDOutputBuilder *outputBuilder;
@property (retain, nonatomic) NSNumber *startTimestamp;
@property (retain, nonatomic) NSNumber *endTimestamp;
@property (retain, nonatomic) NSDictionary *ruleParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTreatmentId;
- (void).cxx_destruct;
- (BOOL)isValid;
- (short)getModelVersion;
- (long long)getAssetCreationTimestamp;
- (id)getColdstartModelId;
- (id)getUseCaseId;
- (id)getModelId;
- (id)getModelFormat;
- (id)getMaxItemsToDisplay;
- (BOOL)isAvailableNow;
- (BOOL)startsBefore:(id)a0;
- (id)topNPredictions:(unsigned long long)a0 forDomain:(id)a1 usingFeatureProvider:(id)a2 error:(id *)a3;
- (id)getOutputFeatureIds;
- (id)initWithDictionary:(id)a0 andModelStore:(id)a1;

@end
