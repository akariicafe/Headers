@interface CXChannelProviderConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int audioSessionID;

- (unsigned long long)hash;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)sanitizedCopy;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
