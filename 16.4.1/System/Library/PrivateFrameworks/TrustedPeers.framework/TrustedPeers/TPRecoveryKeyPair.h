@class NSData;

@interface TPRecoveryKeyPair : NSObject

@property (readonly, retain) NSData *signingKeyData;
@property (readonly, retain) NSData *encryptionKeyData;

- (void).cxx_destruct;
- (id)initWithSigningKeyData:(id)a0 encryptionKeyData:(id)a1;
- (id)initWithStableInfo:(id)a0;

@end
