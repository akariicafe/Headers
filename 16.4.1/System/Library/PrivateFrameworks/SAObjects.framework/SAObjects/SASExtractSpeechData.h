@class NSString, NSNumber;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioOutputType;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *speechRequestId;
@property (copy, nonatomic) NSNumber *startTime;

+ (id)extractSpeechData;
+ (id)extractSpeechDataWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
