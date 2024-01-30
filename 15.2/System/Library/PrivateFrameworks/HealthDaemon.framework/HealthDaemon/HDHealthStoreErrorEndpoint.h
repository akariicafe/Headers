@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {
    NSError *_error;
}

- (void).cxx_destruct;
- (void)remote_serverForConfiguration:(id)a0 completion:(id /* block */)a1;

@end
