@class PKSubcredentialProvisioningOperationContext, PKSubcredentialProvisioningConfiguration;
@protocol PKSubcredentialProvisioningOperationDelegate;

@interface PKSubcredentialProvisioningOperation : NSObject {
    BOOL _inProgress;
}

@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress;
@property (readonly, weak, nonatomic) id<PKSubcredentialProvisioningOperationDelegate> delegate;
@property (readonly, nonatomic) PKSubcredentialProvisioningConfiguration *configuration;
@property (readonly, nonatomic) PKSubcredentialProvisioningOperationContext *context;
@property (readonly, nonatomic) BOOL canCancelOperation;
@property (readonly, nonatomic) BOOL canBeRestarted;

+ (id)operationForState:(long long)a0 configuration:(id)a1 context:(id)a2 delegate:(id)a3;

- (void)performOperation;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancelOperation;
- (void)advanceToState:(long long)a0;
- (void)failWithErrorCode:(long long)a0 description:(id)a1;
- (void)failWithErrorCode:(long long)a0 description:(id)a1 underlyingError:(id)a2;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
