@interface ContextualUnderstanding.SystemAudioClassifier : NSObject {
    void /* unknown type, empty encoding */ analysisQueue;
    void /* unknown type, empty encoding */ soundAnalysisBiomeStream;
    void /* unknown type, empty encoding */ audioEngine;
    void /* unknown type, empty encoding */ analyzer;
    void /* unknown type, empty encoding */ resultsObserver;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleAudioSessionInterruption:(id)a0;

@end
