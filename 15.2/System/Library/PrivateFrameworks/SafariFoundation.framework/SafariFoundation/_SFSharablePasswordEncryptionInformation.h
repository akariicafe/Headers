@class NSData;

@interface _SFSharablePasswordEncryptionInformation : NSObject

@property (readonly, copy, nonatomic) NSData *encryptedPasswordData;
@property (readonly, copy, nonatomic) NSData *encryptionKeyReference;

- (void).cxx_destruct;
- (id)initWithEncryptedPasswordData:(id)a0 encryptionKeyReference:(id)a1;

@end
