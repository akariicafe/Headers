@class AXSDUltronInternalRecordingManager, NSSet, AXSDDetectorManager, NSString, AXSDListenEngine, NSMutableSet, AXSDDetectorQueueManager;

@interface AXSDSoundDetectionController : NSObject <AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, UNUserNotificationCenterDelegate, AXSDDetectorQueueManagerDelegate> {
    AXSDListenEngine *_listener;
    AXSDDetectorQueueManager *_detectorQueueManager;
    NSMutableSet *_detectorQueue;
    AXSDUltronInternalRecordingManager *_recordingManager;
}

@property (readonly) NSSet *currentDetectionTypes;
@property (retain, nonatomic) AXSDDetectorManager *detectorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)startListening;
- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (void)_startInternalRecordingWithFormat:(id)a0;
- (void)addListenType:(id)a0;
- (void)assetsReadyAndDetectorsAdded;
- (void)enrollForDataCollection;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)removeAllListenTypes;
- (void)removeListenType:(id)a0;
- (void)unenrollFromDataCollection;

@end
