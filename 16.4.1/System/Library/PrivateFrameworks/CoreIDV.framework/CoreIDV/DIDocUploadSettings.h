@class NSArray, NSString;

@interface DIDocUploadSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *certificateChain;
@property (readonly, nonatomic) NSString *recipient;
@property (readonly, nonatomic) NSString *encryptionVersion;
@property (readonly, nonatomic) long long container;
@property (readonly, nonatomic) BOOL base64EncodingEnabled;

- (id)initWithContainer:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCertificateChain:(id)a0 recipient:(id)a1 encryptionVersion:(id)a2;
- (id)initWithCertificateChain:(id)a0 container:(long long)a1 recipient:(id)a2 encryptionVersion:(id)a3;
- (id)initWithCertificateChain:(id)a0 container:(long long)a1 recipient:(id)a2 encryptionVersion:(id)a3 base64EncodingEnabled:(BOOL)a4;
- (id)initWithCertificateChain:(id)a0 recipient:(id)a1 encryptionVersion:(id)a2 base64EncodingEnabled:(BOOL)a3;

@end
