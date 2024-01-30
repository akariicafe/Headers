@class NSString, NSMutableString;

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableString *_accumulatedDescription;
}

@property (copy) NSString *cloudDescription;

- (void).cxx_destruct;
- (void)didFinishWithSuccess;
- (void)didFailWithErrors:(id)a0;
- (id)pipelineForRepository:(id)a0;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;

@end
