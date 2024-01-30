@class HAPSecuritySessionEncryption;

@interface HAP2AccessoryServerSecureTransportThreadPaired : HAP2AccessoryServerSecureTransportPairVerify

@property (retain, nonatomic) HAPSecuritySessionEncryption *eventEncryption;

- (void).cxx_destruct;
- (id)decryptData:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)securitySession:(id)a0 didCloseWithError:(id)a1;
- (void)securitySessionDidOpen:(id)a0;
- (id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)a0;

@end
