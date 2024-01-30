@class NSString;

@interface AMDURLBag : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *tasteProfileURLString;
@property (retain, nonatomic) NSString *itemMetadataURLString;
@property (retain, nonatomic) NSString *modelVersionURLString;
@property (retain, nonatomic) NSString *modelFetchURLString;
@property (retain, nonatomic) NSString *workflowsURLString;
@property (retain, nonatomic) NSString *bizLogicURLString;
@property (retain, nonatomic) NSString *workflowsFetchAllURLString;
@property (retain, nonatomic) NSString *userTreatmentsFetchURLString;

+ (id)getStorefrontCodeForId:(id)a0 withDefault:(id)a1;
+ (id)getStorefrontIdForCode:(id)a0 withDefault:(id)a1;

- (void).cxx_destruct;
- (id)versionUrlForModel:(id)a0 andFormat:(id)a1;
- (id)fetchUrlForModel:(id)a0 andFormat:(id)a1 withArchiveFromatVersion:(unsigned char)a2;
- (id)workflowsFetchAllURLForStorefront:(id)a0;
- (id)userTreatmentsFetchURLForUser:(id)a0 forStorefront:(id)a1;
- (id)urlForBusinessLogic;
- (id)initForDomain:(id)a0 withTasteProfileURL:(id)a1 itemMetadataURL:(id)a2 modelVersionURL:(id)a3 modelFetchURL:(id)a4 fetchWorkflowsURL:(id)a5 fetchBizLogicURL:(id)a6 fetchAllWorkflowURL:(id)a7 fetchUserTreatmentsURL:(id)a8;
- (id)tasteProfileUrlForUser:(id)a0 forStorefront:(id)a1 withFeatureIds:(id)a2;
- (id)itemMetadataUrlForContents:(id)a0 forStorefront:(id)a1;
- (id)urlForWorkflowsForUser:(id)a0 forStorefront:(id)a1;

@end
