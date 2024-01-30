@interface HDCloudSyncManagerStatusTask : HDCloudSyncManagerRepositoryTask {
    id /* block */ _completion;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)mainWithRepositories:(id)a0 error:(id)a1;

@end
