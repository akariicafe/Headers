@class NSObject, SNAudioStreamAnalyzer, AVAudioFile;
@protocol OS_dispatch_queue;

@interface SNAudioFileAnalyzer : NSObject {
    AVAudioFile *_audioFile;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _wasCancelled;
}

- (id)detailedDescription;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (void)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (void)removeAllRequests;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)cancelAnalysis;

@end
