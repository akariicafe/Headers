@class NSString, AAFXPCSession;

@interface AKInheritanceController : NSObject <AAFXPCSessionDelegate, AKInheritanceInterface>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBeneficiaryWithInheritanceContext:(id)a0 completion:(id /* block */)a1;
- (void)_setupBeneficiaryAliasWithInheritanceContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithXPCSession:(id)a0;
- (void)fetchManifestOptionsWithInheritanceContext:(id)a0 completion:(id /* block */)a1;
- (void)updateBeneficiaryWithInheritanceContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeBeneficiaryWithInheritanceContext:(id)a0 completion:(id /* block */)a1;

@end
