@class NSMutableDictionary, AMDModelStore;

@interface AMDUseCaseManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *useCaseWorkflows;
@property (retain, nonatomic) AMDModelStore *modelStore;

+ (id)sharedManager;
+ (id)getBusinessLogicJsFileURL;

- (void).cxx_destruct;
- (id)init;
- (void)loadWorkflowsFromStorage;
- (id)getUseCaseWorkflowForId:(id)a0;
- (id)getWorkflowJSONFileURL;
- (BOOL)checkAndUpdateWorkflowDefinitions:(id)a0;
- (id)fetchDataFromServerForUrl:(id)a0 forApi:(id)a1;
- (id)refreshUserTreatmentsFromServiceForUser:(id)a0 forStorefront:(id)a1;
- (id)pruneWorkflowsDefinitions:(id)a0 usingTreatments:(id)a1;
- (BOOL)refreshBusinessLogicJS;
- (id)getAllActiveWorkflows;
- (BOOL)refreshAMDConfigFromServiceForUser:(id)a0 andStorefront:(id)a1;
- (void)loadAllModels;
- (void)refreshModelWithId:(id)a0 withDelegate:(id)a1;

@end
