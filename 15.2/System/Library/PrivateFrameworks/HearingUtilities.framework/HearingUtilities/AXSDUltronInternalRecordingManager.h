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

+ (id)defaults;
+ (id)_directory;
+ (id)path;
+ (void)enroll;
+ (void)unenroll;
+ (BOOL)isEnrolled;
+ (id)filesNearestDate:(id)a0;
+ (void)cleanupUltron;
+ (id)_retrieveFilesOlderThan:(double)a0;
+ (BOOL)_cleanupUltronFiles:(id)a0;
+ (void)_reduceFileDirectorySize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSampleLength:(double)a0 bufferSize:(double)a1;
- (void)trackBuffer:(id)a0 atTime:(id)a1;
- (void)saveDetectionResult:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)_recordResultToFile:(id)a0;
- (id)audioFileSettings;
- (id)getDictionaryForListenType;

@end
