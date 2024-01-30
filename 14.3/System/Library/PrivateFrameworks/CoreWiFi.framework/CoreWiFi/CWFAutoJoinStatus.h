@class NSUUID, NSString, NSArray, NSDate;

@interface CWFAutoJoinStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (copy, nonatomic) NSArray *joinAttempts;
@property (nonatomic) long long trigger;
@property (nonatomic) long long state;
@property (nonatomic) BOOL result;

- (id)init;
- (void).cxx_destruct;
- (id)__descriptionForAutoJoinState:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAutoJoinStatus:(id)a0;
- (id)__descriptionForAutoJoinTrigger:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
