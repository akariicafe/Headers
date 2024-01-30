@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint

@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0 daemon:(id)a1 error:(id)a2;
- (void)remote_serverForConfiguration:(id)a0 completion:(id /* block */)a1;

@end
