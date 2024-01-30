@class NSData, Signature;

@interface SignedObject : GPBMessage

@property (copy, nonatomic) NSData *object;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) BOOL hasSignature;

+ (id)descriptor;

@end
