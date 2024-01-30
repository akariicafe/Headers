@class SNAudioQueueConfiguration, SNAudioRecordingQueueScheduler, AVAudioSession, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface SNAudioRecordingQueue : NSObject {
    AVAudioFormat *_recordFormat;
    SNAudioQueueConfiguration *_audioQueueConfiguration;
    AVAudioSession *_session;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _bufferHandler;
    id /* block */ _interruptionHandler;
    BOOL _running;
    struct OpaqueAudioQueue { } *_audioQueue;
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
