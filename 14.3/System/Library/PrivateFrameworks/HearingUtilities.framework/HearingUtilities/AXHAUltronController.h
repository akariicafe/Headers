@class AXUIClient, NSString, AXUltronModelAssetManager, NSObject, AXHARingBuffer, NSMutableDictionary, AXHAListenEngine, SBSStatusBarStyleOverridesAssertion, NSFileManager, AXHADetectorManager, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AXHAUltronController : NSObject <AXHADetectorManagerDelegate, AXHAListenEngineDelegate, AXUIClientDelegate, AXHAUltronModelAssetManagerDelegate> {
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    AXUIClient *_hearingUIClient;
    AXHAListenEngine *_listener;
    AXHADetectorManager *_detectorManager;
    AXUltronModelAssetManager *_assetManager;
    NSFileManager *_fileManager;
    NSUserDefaults *_defaults;
    double _sampleLength;
    BOOL _assetsReady;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    int _state;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
    NSMutableDictionary *_currentDetections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isListening;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)enroll;
- (id)hearingUIClient;
- (void)_processResult:(id)a0;
- (id)directory;
- (void)assetsReadyForUltronManager:(id)a0;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (BOOL)isEnrolled;
- (void)_setupDetectorManager;
- (void)_startRecording;
- (id)retrieveFilesOlderThan:(double)a0;
- (BOOL)cleanupUltronFiles:(id)a0;
- (void)reduceFileDirectorySize;
- (BOOL)stopUltron;
- (void)_recordResultToFile:(id)a0;
- (id)recorderSettings;
- (id)getDictionaryForListenType;
- (void)unenroll;
- (BOOL)startUltron;
- (void)cleanupUltron;

@end
