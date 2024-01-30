@class NSString;

@interface CWFEventID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)eventIDWithType:(long long)a0 interfaceName:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToEventID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
