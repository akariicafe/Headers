@interface MSPReadOnlyCloudContainer : MSPCloudContainer

- (void)removeCloudContainerWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToChangesWithCompletion:(id /* block */)a0;
- (void)pushChanges:(id)a0 withGroup:(id)a1 completion:(id /* block */)a2;
- (void)setupCloudContainerWithGroup:(id)a0 completion:(id /* block */)a1;

@end
