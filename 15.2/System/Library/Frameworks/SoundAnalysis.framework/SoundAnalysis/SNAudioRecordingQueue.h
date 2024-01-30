@class AVAudioFormat, SNAudioQueueConfiguration, SNAudioRecordingQueueScheduler;

@interface SNAudioRecordingQueue : NSObject {
    AVAudioFormat *_recordFormat;
    SNAudioQueueConfiguration *_audioQueueConfiguration;
    BOOL _running;
    struct OpaqueAudioQueue { } *_audioQueue;
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;
}

- (void)_stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithFormat:(id)a0 audioQueueConfiguration:(id)a1;
- (BOOL)startHandlingBuffersOnQueue:(id)a0 audioSession:(id)a1 handler:(id /* block */)a2;

@end
