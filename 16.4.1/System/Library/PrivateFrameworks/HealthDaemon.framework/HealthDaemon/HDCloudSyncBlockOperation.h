@interface HDCloudSyncBlockOperation : HDCloudSyncOperation {
    id /* block */ _block;
}

- (void)main;
- (void)skip;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 block:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 synchronousBlock:(id /* block */)a2;

@end
