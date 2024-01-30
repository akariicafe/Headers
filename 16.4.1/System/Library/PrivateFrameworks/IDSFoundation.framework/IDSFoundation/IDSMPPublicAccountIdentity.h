@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (readonly, nonatomic) NSData *publicName;

+ (id)publicAccountIdentitywithDataRepresentation:(id)a0 error:(id *)a1;

- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1 error:(id *)a2;

@end
