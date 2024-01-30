@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sequenceCounter;
@property (readonly, copy, nonatomic) NSString *platformIdentifier;
@property (readonly, copy, nonatomic) PKSecureElementCertificateSet *certificates;
@property (readonly, nonatomic) unsigned long long certificateVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSecureElementCertificateSet:(id)a0 sequenceCounter:(id)a1 platformIdentifier:(id)a2 certificateVersion:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
