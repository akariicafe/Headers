@class NSString, PKSubcredentialPairingFlowControllerContext;

@interface PKCredentialProvisioningView : PKProvisioningProgressView {
    BOOL _supportsUWB;
    PKSubcredentialPairingFlowControllerContext *_context;
    NSString *_templateIdentifier;
}

@property (nonatomic) long long state;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
