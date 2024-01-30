@class NSData;

@interface PODeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *_deviceSigningKeyData;
@property (retain, nonatomic) NSData *_deviceEncryptionKeyData;
@property (nonatomic) struct __SecKey { } *deviceSigningKey;
@property (nonatomic) struct __SecCertificate { } *deviceSigningCertificate;
@property (readonly) struct __SecIdentity { } *deviceSigningIdentity;
@property (nonatomic) struct __SecKey { } *deviceEncryptionKey;
@property (nonatomic) struct __SecCertificate { } *deviceEncryptionCertificate;
@property (readonly) struct __SecIdentity { } *deviceEncryptionIdentity;
@property BOOL registrationCompleted;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (struct __SecIdentity { } *)deviceEncryptionIdentity;
- (struct __SecIdentity { } *)deviceSigningIdentity;

@end
