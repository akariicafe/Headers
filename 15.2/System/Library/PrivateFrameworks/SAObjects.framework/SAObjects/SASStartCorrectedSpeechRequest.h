@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic) long long combinedRank;
@property (nonatomic) double combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (nonatomic) BOOL onDeviceUtterancesPresent;
@property (nonatomic) long long originalRank;
@property (nonatomic) double originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;

+ (id)startCorrectedSpeechRequest;
+ (id)startCorrectedSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
