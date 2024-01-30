@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long supportedOptions;
@property (readonly, nonatomic) unsigned long long enabledOptions;
@property (readonly, copy, nonatomic) UNNotificationTopic *topic;
@property (readonly, nonatomic) unsigned long long options;

+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 options:(unsigned long long)a2;
+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 supportedOptions:(unsigned long long)a4 enabledOptions:(unsigned long long)a5;
+ (id)topicRequestWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 options:(unsigned long long)a4;

- (id)_description;
- (id)_initWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 supportedOptions:(unsigned long long)a4 enabledOptions:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
