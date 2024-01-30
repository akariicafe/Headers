@class AFSpeechPackage, NSNumber;

@interface SLUresMitigatorIpFeats : NSObject

@property (retain, nonatomic) AFSpeechPackage *speechPackage;
@property (retain, nonatomic) NSNumber *inputOrigin;
@property (retain, nonatomic) NSNumber *acousticFTMScores;
@property (retain, nonatomic) NSNumber *boronScore;
@property (retain, nonatomic) NSNumber *speakerIDScore;
@property (nonatomic) BOOL didDetectSpeechActivity;
@property (nonatomic) BOOL isAirpodsConnected;
@property (nonatomic) double timeSinceLastQuery;
@property (nonatomic) unsigned long long decisionStage;
@property (retain, nonatomic) NSNumber *prevStageOutput;
@property (retain, nonatomic) NSNumber *eosLikelihood;

- (void).cxx_destruct;

@end
