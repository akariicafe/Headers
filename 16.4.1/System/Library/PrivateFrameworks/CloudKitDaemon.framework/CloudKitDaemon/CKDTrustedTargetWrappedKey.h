@class NSData, CKPublicKey;

@interface CKDTrustedTargetWrappedKey : NSObject

@property (readonly, copy, nonatomic) NSData *wrappedKey;
@property (readonly, nonatomic) CKPublicKey *publicKey;

- (void).cxx_destruct;
- (id)initWithWrappedKey:(id)a0 publicKey:(id)a1;

@end
