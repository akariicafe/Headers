@class NSTimer, NSString, NSArray, SNDetectionResult, NSMutableDictionary, NSDictionary, AXSDKShotDetector, NSObject, AXHARingBuffer;
@protocol OS_dispatch_queue, AXSDKShotRecordingManagerDelegate;

@interface AXSDKShotRecordingManager : NSObject <SNResultsObserving> {
    double _sampleLength;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
}

@property (nonatomic) BOOL isDetectionInProgress;
@property (retain, nonatomic) NSString *currentDetectionType;
@property (nonatomic) int numNonDetections;
@property (nonatomic) int numObservations;
@property (retain, nonatomic) NSMutableDictionary *currentDetections;
@property (retain, nonatomic) NSArray *cachedCurrentAudio;
@property (retain, nonatomic) NSDictionary *cachedCurrentResults;
@property (retain, nonatomic) SNDetectionResult *cachedDetectionResult;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL shouldSendSimilarityWarning;
@property (weak, nonatomic) id<AXSDKShotRecordingManagerDelegate> delegate;
@property (retain, nonatomic) AXSDKShotDetector *targetDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaults;
+ (BOOL)_cleanupKShotFiles:(id)a0;
+ (id)_retrieveFilesOlderThan:(double)a0;
+ (void)cleanupKShotFiles;
+ (id)modelPathForDetector:(id)a0;
+ (id)requestForDetector:(id)a0;

- (id)path;
- (void).cxx_destruct;
- (void)reset;
- (id)_directory;
- (id)audioFileSettings;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)_cacheResultAndWaitForSave:(id)a0;
- (void)_kShotShouldSaveCurrentSoundDidChange;
- (void)_recordCachedResultToFile;
- (id)initWithSampleLength:(double)a0 bufferSize:(double)a1;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (unsigned long long)nRecordingsSoFar;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)saveDetectionResult:(id)a0;
- (void)trackBuffer:(id)a0 atTime:(id)a1;
- (void)updateShouldSendSimilarityWarning:(id)a0;

@end
