@class NSString;

@interface CXHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (id)stringForType:(long long)a0;

- (BOOL)isEqualToHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
