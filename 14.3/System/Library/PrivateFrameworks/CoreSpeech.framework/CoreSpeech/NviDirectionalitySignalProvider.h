@class NSHashTable, NSString, SNAudioStreamAnalyzer, NviAudioFileWriter, NviDataLogger, NviDirectionalitySignalData, NSMutableDictionary, NSObject, NviContext;
@protocol NviAssetsProvider, OS_dispatch_queue, NviAudioDataSource;

@interface NviDirectionalitySignalProvider : NSObject <NviAudioDataReceiver, SNResultsObserving, NviSignalProvider>

@property (retain, nonatomic) id<NviAudioDataSource> dataSrc;
@property (retain, nonatomic) id<NviAssetsProvider> assetsProvider;
@property (retain, nonatomic) NviContext *nviCtx;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) float dirAzimuthEMAParam;
@property (nonatomic) long long currReqFirstSampleId;
@property (nonatomic) unsigned long long currNumSamplesProcessed;
@property (nonatomic) float currEstimatedAzimuth;
@property (retain, nonatomic) NviDirectionalitySignalData *dirSigData;
@property (retain, nonatomic) NviDataLogger *sigDataWriter;
@property (nonatomic) BOOL doneProcessing;
@property (retain, nonatomic) NviAudioFileWriter *audioFileWriter;
@property (retain, nonatomic) NSMutableDictionary *azDistribution;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL receiveOnlyProcessedChannelData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long sigType;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)audioChunkAvailable:(id)a0 numChannels:(unsigned long long)a1 numSamplesPerChannel:(unsigned long long)a2 startSampleId:(unsigned long long)a3 atAbsMachTimestamp:(unsigned long long)a4;
- (id)initWithDataSource:(id)a0 assetsProvider:(id)a1;
- (void)startWithNviContext:(id)a0 didStartHandler:(id /* block */)a1;
- (void)stopWithDidStopHandler:(id /* block */)a0;

@end
