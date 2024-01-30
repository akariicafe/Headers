@class NSArray, HDAssertion;

@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSArray *pipelines;
@property (retain, nonatomic) HDAssertion *accessibilityAssertion;

- (id)pipelineForRepository:(id)a0;
- (void)mainWithRepositories:(id)a0 error:(id)a1;
- (void)didFinishWithSuccess;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)didFailWithErrors:(id)a0;
- (void)callCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (BOOL)requiresExistingShareOwnerParticipant;
- (id)initWithManager:(id)a0 context:(id)a1;

@end
