@class PKSubcredentialProvisioningController, NSString, PKSubcredentialProvisioningConfiguration;

@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol>

@property (retain, nonatomic) PKSubcredentialProvisioningController *provisioningController;
@property (retain, nonatomic) PKSubcredentialProvisioningConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cancelProvisioningWithCompletion:(id /* block */)a0;
- (void)rescindSimilarInvitationsToSharingRequest:(id)a0 withWebService:(id)a1 completion:(id /* block */)a2;
- (void)setNewAuthRandomIfNecessaryWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)startProvisioning;

@end
