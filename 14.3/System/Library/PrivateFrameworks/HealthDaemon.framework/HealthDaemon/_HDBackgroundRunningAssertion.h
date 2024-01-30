@class CLInUseAssertion, BKSProcessAssertion, HDHealthStoreClient;

@interface _HDBackgroundRunningAssertion : HDAssertion

@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, nonatomic) BOOL shouldAcquireCLAssertion;
@property (retain, nonatomic) BKSProcessAssertion *bksAssertion;
@property (retain, nonatomic) CLInUseAssertion *coreLocationAssertion;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)a0 client:(id)a1 shouldAcquireCLAssertion:(BOOL)a2;

@end
