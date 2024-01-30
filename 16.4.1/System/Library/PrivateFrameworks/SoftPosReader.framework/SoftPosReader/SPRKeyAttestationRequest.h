@class NSData;

@interface SPRKeyAttestationRequest : NSObject <SPRDERRepresentable>

@property (readonly, copy, nonatomic) NSData *publicKeyInfo;
@property (readonly, copy) NSData *derRepresentation;

- (void).cxx_destruct;
- (id)initWithDERRepresentation:(id)a0 error:(id *)a1;
- (id)initWithPublicKeyInfo:(id)a0;
- (id)initWithSequence:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;

@end
