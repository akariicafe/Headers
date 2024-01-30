@class NSError, PKPaymentWebService, PKPaymentPass;

@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long flowType;
@property (retain, nonatomic) PKPaymentWebService *localDeviceWebService;
@property (retain, nonatomic) PKPaymentWebService *remoteDeviceWebService;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) PKPaymentPass *provisionedRemotePass;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL shouldExitFlowOnError;
@property (readonly, nonatomic) long long setupContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFlowType:(long long)a0;

@end
