@class UNNotificationSettings, NSArray;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) UNNotificationSettings *notificationSettings;
@property (readonly, copy, nonatomic) NSArray *topicSettings;
@property (readonly, nonatomic) BOOL isRestricted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithNotificationSettings:(id)a0 topicSettings:(id)a1 isRestricted:(BOOL)a2;
- (void).cxx_destruct;

@end
