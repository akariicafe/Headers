@class NSString, NSDate;

@interface GEOConfigExpiringKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) NSDate *expireTime;
@property (readonly, nonatomic) NSString *expireOSVersion;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

+ (id)expiringKey:(id)a0 withTime:(id)a1 osVersion:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isExpiredRelativeTo:(id)a0 osVersion:(id)a1;
- (id)initWithKey:(id)a0 time:(id)a1 osVersion:(id)a2;

@end
