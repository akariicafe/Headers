@interface HMMediaSystemRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)leftRole;
+ (BOOL)roleFromDictionary:(id)a0 roleOutput:(unsigned long long *)a1;
+ (id)rightRole;

- (id)serialize;
- (id)initWithRole:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
