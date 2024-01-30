@class NSData, HDFHIRCredential;

@interface HDClinicalAuthenticationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDFHIRCredential *credential;
@property (readonly, copy, nonatomic) NSData *tokenKeyFingerprint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCredential:(id)a0 tokenKeyFingerprint:(id)a1;

@end
