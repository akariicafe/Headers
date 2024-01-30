@class NSData, CKPublicKey;

@interface CKDTrustedTargetWrappedKey : NSObject

@property (copy, nonatomic) NSData *wrappedKey;
@property (copy, nonatomic) CKPublicKey *publicKey;

- (void).cxx_destruct;
- (id)initWithWrappedKey:(id)a0 publicKey:(id)a1;

@end
