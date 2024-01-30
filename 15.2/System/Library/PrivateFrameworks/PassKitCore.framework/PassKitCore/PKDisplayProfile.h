@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;

+ (Class)classForDisplayProfileType:(long long)a0;
+ (id)displayProfileOfType:(long long)a0 withDictionary:(id)a1 bundle:(id)a2;

- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
