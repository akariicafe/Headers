@interface PKCredentialProvisioningView : PKProvisioningProgressView {
    BOOL _supportsUWB;
}

@property (nonatomic) long long state;

- (id)initWithContext:(id)a0;

@end
