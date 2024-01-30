@class MLUpdateProgressHandlers, NSString, MLModel, NSURL, NSObject;
@protocol MLBatchProvider, MLUpdatable, OS_dispatch_queue;

@interface MLUpdateTask : MLTask <MLTaskStateTransitionDelegate>

@property (readonly, nonatomic) MLModel<MLUpdatable> *updatableModel;
@property (readonly, nonatomic) id<MLBatchProvider> trainingData;
@property (readonly, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic) BOOL updateHasStarted;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (readonly, nonatomic) NSURL *updatableModelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateTaskForModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 progressHandlers:(id)a3 error:(id *)a4;
+ (BOOL)updateModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 writeToURL:(id)a3 error:(id *)a4;
+ (id)updateTaskForModelAtURL:(id)a0 trainingData:(id)a1 completionHandler:(id /* block */)a2 error:(id *)a3;
+ (id)updateTaskForModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 completionHandler:(id /* block */)a3 error:(id *)a4;
+ (id)updateTaskForModelAtURL:(id)a0 trainingData:(id)a1 progressHandlers:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerBlock;
- (void)_invokeProgressHandlerForContext:(id)a0;
- (id /* block */)_progressHandlerBlock;
- (id)initWithModelAtURL:(id)a0 trainingData:(id)a1 configuration:(id)a2 progressHandlers:(id)a3 error:(id *)a4;
- (void)onCancellation;
- (void)onCompletionWithTaskContext:(id)a0;
- (void)onFailureWithTaskContext:(id)a0;
- (void)onResumptionWithTaskContext:(id)a0;
- (void)onSuspensionWithTaskContext:(id)a0;
- (void)resumeWithParameters:(id)a0;

@end
