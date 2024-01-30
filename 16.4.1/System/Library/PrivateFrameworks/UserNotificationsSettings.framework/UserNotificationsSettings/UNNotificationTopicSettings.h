@class UNNotificationSettings, UNNotificationTopic;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) UNNotificationTopic *topic;
@property (readonly, copy, nonatomic) UNNotificationSettings *topicSettings;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTopic:(id)a0 settings:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
