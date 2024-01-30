@class AXSDUltronInternalRecordingManager, NSSet, AXSDDetectorManager, NSString, AXSDListenEngine, NSMutableSet, AXSDDetectorQueueManager;

@interface AXSDSoundDetectionController : NSObject <AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, AXSDDetectorQueueManagerDelegate> {
    AXSDListenEngine *_listener;
    AXSDDetectorQueueManager *_detectorQueueManager;
    NSMutableSet *_detectorQueue;
    AXSDUltronInternalRecordingManager *_recordingManager;
    BOOL _ready;
}

@property (readonly) NSSet *currentDetectionTypes;
@property (retain, nonatomic) AXSDDetectorManager *detectorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopListening;
- (void)startListening;
- (void).cxx_destruct;
- (id)init;
- (void)assetsReadyAndDetectorsAdded;
- (void)removeAllListenTypes;
- (void)addListenType:(id)a0;
- (void)removeListenType:(id)a0;
- (void)_startInternalRecordingWithFormat:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)enrollForDataCollection;
- (void)unenrollFromDataCollection;

@end
