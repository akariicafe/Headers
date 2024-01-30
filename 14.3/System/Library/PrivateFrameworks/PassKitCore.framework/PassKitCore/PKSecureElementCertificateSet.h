@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsLegacyFormats;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithRSACertificate:(id)a0 ECDSACertificate:(id)a1;
- (id)certificateOfType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
