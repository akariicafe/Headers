@class NSString;

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *domainName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(long long)a0 domainName:(id)a1;

@end
