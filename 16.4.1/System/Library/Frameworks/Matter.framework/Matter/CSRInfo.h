@class NSData;

@interface CSRInfo : NSObject

@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *elements;
@property (copy, nonatomic) NSData *elementsSignature;
@property (copy, nonatomic) NSData *csr;

- (void).cxx_destruct;
- (id)initWithNonce:(id)a0 elements:(id)a1 elementsSignature:(id)a2 csr:(id)a3;

@end
