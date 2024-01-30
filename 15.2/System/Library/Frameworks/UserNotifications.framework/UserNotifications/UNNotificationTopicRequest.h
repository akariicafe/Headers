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

- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3 supportedOptions:(unsigned long long)a4 enabledOptions:(unsigned long long)a5;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_description;
- (unsigned long long)hash;

@end
