@class NSMutableDictionary, NSTimer, NSObject, AXHARingBuffer;
@protocol OS_dispatch_queue;

@interface AXSDUltronInternalRecordingManager : NSObject {
    double _sampleLength;
    NSTimer *_cleanupTimer;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
    NSMutableDictionary *_currentDetections;
}

+ (id)path;
+ (id)defaults;
+ (id)_directory;
+ (BOOL)isEnrolled;
+ (BOOL)_cleanupUltronFiles:(id)a0;
+ (void)_reduceFileDirectorySize;
+ (id)_retrieveFilesOlderThan:(double)a0;
+ (void)cleanupUltron;
+ (void)enroll;
+ (void)unenroll;

- (void)dealloc;
- (void).cxx_destruct;
- (id)audioFileSettings;
- (void)_recordResultToFile:(id)a0;
- (id)getDictionaryForListenType;
- (id)initWithSampleLength:(double)a0 bufferSize:(double)a1;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)saveDetectionResult:(id)a0;
- (void)trackBuffer:(id)a0 atTime:(id)a1;

@end
