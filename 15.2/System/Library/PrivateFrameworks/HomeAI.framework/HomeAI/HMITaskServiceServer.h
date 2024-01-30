@class NSOperationQueue;

@interface HMITaskServiceServer : HMITaskService {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSOperationQueue *operationQueue;
@property int nextTaskID;

+ (id)logCategory;

- (BOOL)cancelTask:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (int)submitTaskWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)buildUpdatePersonsModelTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildRemovePersonsModelTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildHomePersonClusteringTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildTuriTrialUpdateTaskFromOptions:(id)a0 error:(id *)a1;
- (int)getNextTaskID;
- (id)buildFaceMisclassificationTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildSubmitFeedbackTaskFromOptions:(id)a0 error:(id *)a1;
- (id)buildUpdateTorsoModelTaskFromOptions:(id)a0 error:(id *)a1;
- (int)submitTask:(id)a0 completionHander:(id /* block */)a1;

@end
