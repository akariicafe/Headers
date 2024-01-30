@class NSArray;

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (readonly, nonatomic) NSArray *deviceSignatureCertificateChain;
@property (readonly, nonatomic) NSArray *deviceDecryptionCertificateChain;
@property (readonly, nonatomic) NSArray *serverDecryptionCertificateChain;
@property (readonly, nonatomic) NSArray *serverSignatureCertificateChain;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_retrieveCertificateChainFromJSONObject:(id)a0 withParameterName:(id)a1;

@end
