@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destinations;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) UNNotificationContent *content;
@property (readonly, copy, nonatomic) UNNotificationTrigger *trigger;

+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;
+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2;
+ (id)requestWithIdentifier:(id)a0 pushPayload:(id)a1 bundleIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
