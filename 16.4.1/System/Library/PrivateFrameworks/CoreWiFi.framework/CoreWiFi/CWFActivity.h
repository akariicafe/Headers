@class NSUUID, NSString;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long timeout;

+ (id)activityWithType:(long long)a0 reason:(id)a1;
+ (id)activityWithType:(long long)a0 reason:(id)a1 UUID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToActivity:(id)a0;

@end
