@class NSUUID, NSString;

@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedMediaSystemSettingEventTopic, HMParsedMediaGroupSettingEventTopic, HMParsedHomeEventTopic, HMParsedIndexHomeEventTopic, HMParsedIndexAccessoryEventTopic>

@property (copy, nonatomic) NSUUID *homeUUID;
@property (copy, nonatomic) NSUUID *userUUID;
@property (copy, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSString *accessorySettingKeyPath;
@property (copy, nonatomic) NSUUID *mediaSystemUUID;
@property (copy, nonatomic) NSString *mediaSystemSettingKeyPath;
@property (copy, nonatomic) NSUUID *mediaGroupUUID;
@property (copy, nonatomic) NSString *mediaGroupSettingKeyPath;
@property (copy, nonatomic) NSString *topicSuffix;
@property (nonatomic) BOOL isIndexTopic;
@property (readonly, copy, nonatomic) NSString *originalTopic;
@property (readonly, nonatomic) unsigned long long accessoryEventTopicSuffixID;
@property (readonly, nonatomic) unsigned long long homeEventTopicSuffixID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)asAccessorySettingTopic;
- (id)asAccessoryTopic;
- (id)asHomeEventTopic;
- (id)asIndexAccessoryTopic;
- (id)asIndexHomeTopic;
- (id)asMediaGroupSettingTopic;
- (id)asMediaSystemSettingTopic;

@end
