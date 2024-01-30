@class NSString, NSData;

@interface AMDWorkflowInFlight : NSManagedObject

@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) long long creationTime;
@property (nonatomic) short domain;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelId;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSData *workflow;

+ (id)fetchRequest;
+ (id)deleteWithPredicates:(id)a0 error:(id *)a1;
+ (id)deleteAllInflightWorkflows:(id *)a0;
+ (id)fetchAllWorkflows:(id *)a0;
+ (void)saveWorkflow:(id)a0 forDomain:(long long)a1 withCallUUID:(id)a2 error:(id *)a3;
+ (id)deleteWorkflowsForDomain:(long long)a0 withModelId:(id)a1 error:(id *)a2;
+ (id)fetchAllModelIds:(id *)a0;
+ (id)getAllWorkflowsForDomain:(long long)a0 withModelId:(id)a1 error:(id *)a2;
+ (id)moveInflightWorkflowsToWorkflows:(id)a0 forModelId:(id)a1 withDomain:(long long)a2 error:(id *)a3;
+ (id)fetchAllWorkflowEntries:(id *)a0;

@end
