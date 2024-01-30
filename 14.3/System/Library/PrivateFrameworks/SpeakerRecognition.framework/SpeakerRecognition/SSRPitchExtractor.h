@class NSObject, NSString, EARAudioResultsGenerator;
@protocol OS_dispatch_queue;

@interface SSRPitchExtractor : NSObject <EARAudioResultsGeneratorDelegate>

@property (retain, nonatomic) EARAudioResultsGenerator *resultsGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (float)getPitchForUtteranceAudioFiles:(id)a0;
- (void)_processAudioFileURL:(id)a0;
- (float)_getVoicingWeightedPitchForResultMatrix:(id)a0;
- (float)_getVoicingProbFromRawData:(float)a0;
- (float)_getPitchHzFromRawData:(float)a0;

@end
