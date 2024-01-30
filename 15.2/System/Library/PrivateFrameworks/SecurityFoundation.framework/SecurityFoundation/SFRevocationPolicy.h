@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {
    id _revocationPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long revocationMethods;
@property (nonatomic) long long networkLookup;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRevocationMethods:(unsigned long long)a0 networkLookup:(long long)a1;

@end
