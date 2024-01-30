@class NSURL, NSString;

@interface SSRSpeakerRecognitionScorer : NSObject {
    void *_novDetect;
    unsigned long long _offsetsType;
}

@property (retain, nonatomic) NSURL *configFilePath;
@property (retain, nonatomic) NSURL *resourceFilePath;
@property (retain, nonatomic) NSURL *modelFilePath;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *sysConfigRoot;
@property (readonly, nonatomic) NSString *psrConfigFilePath;
@property (readonly, nonatomic) NSString *psrConfigRoot;
@property (readonly, nonatomic) BOOL satModelAvailable;

+ (id)createVoiceScorersWithVoiceProfiles:(id)a0 withConfigFile:(id)a1 withResourceFile:(id)a2 withOffsetsType:(unsigned long long)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resetForNewRequest;
- (float)scoreSpeakerVector:(id)a0 withDimensions:(unsigned long long)a1 withThresholdType:(unsigned long long)a2;
- (unsigned long long)getSATVectorCount;
- (BOOL)resetScorerWithModelFilePath:(id)a0;
- (id)initWithProfileID:(id)a0 withModelFile:(id)a1 withConfigFile:(id)a2 withResourceFile:(id)a3 withOffsetsType:(unsigned long long)a4;
- (void)deleteVectorAtIndex:(int)a0;
- (void)updateSAT;
- (float)analyzeSuperVector:(id)a0 withDimensions:(unsigned long long)a1 withThresholdType:(unsigned long long)a2;
- (float)normalizedScoreFromRawScore:(float)a0 forScoreType:(unsigned long long)a1;
- (float)_satScoreVTScale;
- (float)_satScoreVTOffset;
- (float)_satLogitCeilScore;
- (float)_satLogitFloorScore;
- (float)_satScoreNonVTScale;
- (float)_satScoreNonVTOffset;
- (id)_getValueForNDAPIConfigOption:(id)a0;
- (double)_getFloatValueForNDAPIConfigOption:(id)a0 defaultValue:(double)a1;
- (id)_getOptionValueFromConfigurationName:(id)a0;
- (float)analyzeSpeakerVector:(id)a0 withDimensions:(unsigned long long)a1 withThresholdType:(unsigned long long)a2;
- (id)getSpeakerVectorAtIndex:(unsigned long long)a0;
- (double)_getFloatValueFromConfigurationName:(id)a0 defaultTo:(double)a1;
- (int)_getIntValueFromConfigurationName:(id)a0 defaultTo:(int)a1;
- (id)_getStringValueFromConfigurationName:(id)a0 defaultTo:(id)a1;

@end
