@class NSData;

@interface SWSignedPersonIdentityProof : SWPersonIdentityProof

@property (readonly, copy, nonatomic) NSData *signatureData;

- (void).cxx_destruct;
- (id)initWithPersonIdentityProof:(id)a0 signatureData:(id)a1;

@end
