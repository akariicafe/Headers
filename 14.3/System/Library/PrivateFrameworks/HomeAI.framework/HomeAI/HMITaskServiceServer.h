@class NSOperationQueue, HMFUnfairLock;

@interface HMITaskServiceServer : HMITaskService

@property (readonly) NSOperationQueue *operationQueue;
@property int nextTaskID;
@property (readonly, nonatomic) HMFUnfairLock *lock;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancelTask:(int)a0;
- (int)submitTaskWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)buildUpdatePersonsModelTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildRemovePersonsModelTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildHomePersonClusteringTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildTuriTrialUpdateTaskFromOptions:(id)a0 error:(id *)a1;
- (int)getNextTaskID;
- (id)buildFaceMisclassificationTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildSubmitFeedbackTaskFromOptions:(id)a0 error:(id *)a1;
- (int)submitTask:(id)a0 completionHander:(id /* block */)a1;

@end
