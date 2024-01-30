@class PKPaymentProvisioningMethodMetadata;

@interface PKPaymentProvisioningMethodMetadataResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
