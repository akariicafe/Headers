@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *alertTopic;

+ (id)soundWithAlertType:(long long)a0 alertTopic:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToSound:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithAlertType:(long long)a0 alertTopic:(id)a1;

@end
