@class NSData;

@interface MTROperationalCSRInfo : NSObject

@property (readonly, copy, nonatomic) NSData *csr;
@property (readonly, copy, nonatomic) NSData *csrNonce;
@property (readonly, copy, nonatomic) NSData *csrElementsTLV;
@property (readonly, copy, nonatomic) NSData *attestationSignature;

- (void).cxx_destruct;
- (id)initWithCSR:(id)a0 csrNonce:(id)a1 csrElementsTLV:(id)a2 attestationSignature:(id)a3;

@end
