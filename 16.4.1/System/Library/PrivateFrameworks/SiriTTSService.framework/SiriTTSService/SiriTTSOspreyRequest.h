@class NSString;

@interface SiriTTSOspreyRequest : NSObject

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *speechId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) unsigned long long requestCreatedTime;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic) float volume;
@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentenceTilt;
@property (nonatomic) BOOL serverLogs;

- (void).cxx_destruct;
- (id)underlyingRequest;

@end
