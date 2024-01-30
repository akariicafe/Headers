@class NSString;

@interface SAVoice : SADomainObject

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageString;
@property (copy, nonatomic) NSString *masteredVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) long long resourceContentVersion;
@property (copy, nonatomic) NSString *resourceMasteredVersion;
@property (nonatomic) long long voiceContentVersion;
@property (copy, nonatomic) NSString *voiceType;

+ (id)voiceWithDictionary:(id)a0 context:(id)a1;
+ (id)voice;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
