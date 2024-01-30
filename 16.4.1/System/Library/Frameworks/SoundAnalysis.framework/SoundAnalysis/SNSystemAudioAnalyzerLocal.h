@class AVAudioSession, SNAudioStreamAnalyzer, SNAudioRecordingQueue, NSMutableDictionary, SNAudioConfiguration, NSMutableArray, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {
    AVAudioFormat *_recordFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    SNAudioRecordingQueue *_recordingQueue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    BOOL _audioIsRunning;
    NSMutableArray *_requests;
    NSMutableDictionary *_observers;
    SNAudioConfiguration *_audioConfiguration;
    AVAudioSession *_audioSession;
}

- (void)removeAllRequests;
- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)handleAVAudioSessionInterruption:(id)a0;
- (void)handleAVAudioSessionMediaServicesLost:(id)a0;
- (void)handleAVAudioSessionMediaServicesReset:(id)a0;
- (void)handleAVAudioSessionRouteChange:(id)a0;
- (void)setAudioConfiguration:(id)a0;

@end
