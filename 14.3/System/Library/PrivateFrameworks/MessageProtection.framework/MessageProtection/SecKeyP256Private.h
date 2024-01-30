@class NSData, SecKeyP256Public, NSString;

@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol>

@property (readonly, nonatomic) id privateKey;
@property (readonly, nonatomic) NSData *privateKeyBlob;
@property (retain, nonatomic) SecKeyP256Public *publicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generate;
+ (id)generateWithAccessControl:(struct __CFString { } *)a0;
+ (const struct __CFString { } *)defaultProtectionClassForPlatform;

- (id)signData:(id)a0 error:(id *)a1;
- (id)keychainData;
- (void).cxx_destruct;
- (id)keyAgreement:(id)a0 error:(id *)a1;
- (id)getPrivateKeyRefWithError:(id *)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)keyAgreement:(id)a0 error:(id *)a1 isRetry:(BOOL)a2;

@end
