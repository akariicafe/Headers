@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (copy, nonatomic) NSString *audioType;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) BOOL requiresWordTimingInfo;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;

+ (id)startSpeechSynthesisStreamingRequest;
+ (id)startSpeechSynthesisStreamingRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
