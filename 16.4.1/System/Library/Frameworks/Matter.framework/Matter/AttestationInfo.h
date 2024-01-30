@class NSData;

@interface AttestationInfo : NSObject

@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *elements;
@property (copy, nonatomic) NSData *elementsSignature;
@property (copy, nonatomic) NSData *dac;
@property (copy, nonatomic) NSData *pai;
@property (copy, nonatomic) NSData *certificationDeclaration;
@property (copy, nonatomic) NSData *firmwareInfo;

- (void).cxx_destruct;
- (id)initWithChallenge:(id)a0 nonce:(id)a1 elements:(id)a2 elementsSignature:(id)a3 dac:(id)a4 pai:(id)a5 certificationDeclaration:(id)a6 firmwareInfo:(id)a7;

@end
