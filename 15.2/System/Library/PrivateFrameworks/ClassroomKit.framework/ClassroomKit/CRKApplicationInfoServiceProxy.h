@class CRKValidXPCConnectionProvider;

@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;

- (void).cxx_destruct;
- (id)init;
- (void)fetchApplicationWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_fetchApplicationWithDescriptor:(id)a0 completion:(id /* block */)a1;

@end
