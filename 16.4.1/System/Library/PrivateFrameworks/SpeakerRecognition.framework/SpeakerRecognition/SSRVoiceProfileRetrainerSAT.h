@class NSString, SSRVoiceProfile, NSDictionary, NSURL, NSData, SSRSpeakerRecognitionScorer, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileRetrainerSAT : NSObject <SSRVoiceProfileRetrainer> {
    unsigned long long _maximumSpeakerVectors;
    float _bestTriggerScore;
}

@property (retain, nonatomic) SSRSpeakerRecognitionScorer *satScorer;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile;
@property (retain, nonatomic) NSURL *configFilePath;
@property (retain, nonatomic) NSURL *resourceFilePath;
@property (retain, nonatomic) NSURL *satModelFilePath;
@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) NSDictionary *comparativeModels;
@property (retain, nonatomic) NSData *superVector;
@property (nonatomic) unsigned long long superVectorSize;
@property (nonatomic) unsigned long long processedAudioDurationMs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSURL *modelFilePath;
@property (readonly, nonatomic) BOOL implicitTrainingRequired;
@property (readonly, nonatomic) unsigned long long retrainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVoiceRetrainingContext:(id)a0;
- (id)_processAudioFile:(id)a0 withSATProcessor:(id)a1;
- (id)_processSuperVector:(id)a0 withSize:(unsigned long long)a1 withScorers:(id)a2 processedAudioDurationMs:(unsigned long long)a3;
- (void)addUtterances:(id)a0 withPolicy:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (BOOL)needsRetrainingWithAudioFiles:(id)a0;
- (id)purgeConfusionInformationWithPolicy:(id /* block */)a0;
- (void)purgeLastSpeakerEmbedding;
- (BOOL)resetModelForRetraining;

@end
