@class NSString, NSData, NSMutableData, EARPSRAudioProcessor, NSObject;
@protocol OS_dispatch_queue, VTTextDependentSpeakerRecognizerDelegate;

@interface VTTextDependentSpeakerRecognizer : NSObject <EARPSRAudioProcessorDelegate> {
    void *_novDetect;
}

@property (retain, nonatomic) EARPSRAudioProcessor *speakerVectorGenerator;
@property (weak, nonatomic) id<VTTextDependentSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSString *satDirectory;
@property (retain, nonatomic) NSString *tdSATModelDirPath;
@property (retain, nonatomic) NSString *assetHash;
@property (retain, nonatomic) NSString *tdSATModelFilePath;
@property (nonatomic) BOOL tdPsrCanProcessRequest;
@property (nonatomic) float lastRequestSatScore;
@property (retain, nonatomic) NSData *speakerVector;
@property (nonatomic) unsigned long long numSamplesProecssed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (retain, nonatomic) NSMutableData *psrAudioDataForLogging;
@property (readonly, nonatomic) long long getSATVectorCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (void)_createDirectoryIfDoesNotExist:(id)a0;
+ (BOOL)psrTdAssetExistsAtResourcePath:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endAudio;
- (void)resetForNewRequest;
- (void)psrAudioProcessor:(id)a0 hasResult:(id)a1 numElements:(unsigned long long)a2;
- (void)processAudio:(const short *)a0 numSamples:(unsigned long long)a1;
- (void)deleteVectorAtIndex:(int)a0;
- (void)updateSAT;
- (id)_getValueForNDAPIConfigOption:(id)a0;
- (double)_getFloatValueForNDAPIConfigOption:(id)a0 defaultValue:(double)a1;
- (int)_getSATVectorCount;
- (id)initWithResourcePath:(id)a0 satDirectory:(id)a1 assetHash:(id)a2 shouldCreateModelDir:(BOOL)a3 delegate:(id)a4;
- (double)getThresholdSAT;
- (double)getCombinationWeight;
- (void)deleteExistingSATModel;
- (void)logWithAudioFilepath:(id)a0;

@end
