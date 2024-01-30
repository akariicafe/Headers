@class NSString, NSDictionary, NSDate;

@interface AFAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *lastSyncDates;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *loggingAssistantIdentifier;
@property (copy, nonatomic) NSString *speechIdentifier;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerLoggingAssistantIdentifier;
@property (copy, nonatomic) NSString *peerSpeechIdentifier;
@property (copy, nonatomic) NSString *peerUserAgentString;
@property (copy, nonatomic) NSString *peerLanguageCode;
@property (nonatomic) BOOL peerSiriEnabled;
@property (copy, nonatomic) NSString *peerHostname;
@property (copy, nonatomic) NSString *predefinedServer;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSDictionary *connectionPolicy;
@property (copy, nonatomic) NSDate *connectionPolicyDate;
@property (copy, nonatomic) NSString *connectionPolicyHostname;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSDate *connectionPolicyFirstFailureDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessageDictionary:(id)a0;
- (id)messageDictionary;

@end
