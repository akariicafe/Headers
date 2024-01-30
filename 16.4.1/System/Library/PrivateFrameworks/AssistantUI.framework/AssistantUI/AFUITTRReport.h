@class NSString, NSDate;

@interface AFUITTRReport : NSObject

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long asrIsCorrect;
@property (copy, nonatomic) NSString *actualASRTranscript;
@property (copy, nonatomic) NSString *userSuggestedASRTranscript;
@property (nonatomic) long long audioRecordingIsUnderstandable;
@property (nonatomic) long long domainIsCorrect;
@property (copy, nonatomic) NSString *actualDomain;
@property (copy, nonatomic) NSString *userSuggestedDomain;

- (id)init;
- (void).cxx_destruct;
- (id)analyzeASRIsCorrect;
- (id)analyzeASRIsWrong;
- (id)composeRadarOutput;
- (id)getTimestampFormatted;
- (id)getTranscriptQuoted;

@end
