@class NSString, NSURL, NSData, NSNumber;

@interface WFSSHKeyPair : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) WFSSHKeyPair *sharedKeyPair;
@property (class, readonly, nonatomic) NSURL *knownHostFileURL;
@property (class, readonly, nonatomic) NSString *defaultKeyComment;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *privateKeyData;
@property (readonly, nonatomic) NSData *publicKeyData;
@property (retain, nonatomic) Class format;
@property (readonly, nonatomic) NSNumber *keySize;
@property (readonly, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSString *localizedType;
@property (readonly, nonatomic) NSString *localizedDescription;

+ (id)keyFormats;
+ (id)keyPairFromPrivateKey:(id)a0 comment:(id)a1 error:(id *)a2;
+ (BOOL)parsePublicKey:(id)a0 type:(id *)a1 data:(id *)a2 comment:(id *)a3;

- (id)publicKey;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)publicKeyFingerprintWithType:(unsigned long long)a0;
- (id)initWithFormat:(Class)a0 privateKeyData:(id)a1 publicKeyData:(id)a2 keySize:(id)a3 comment:(id)a4;
- (id)privateKeyPEM;

@end
