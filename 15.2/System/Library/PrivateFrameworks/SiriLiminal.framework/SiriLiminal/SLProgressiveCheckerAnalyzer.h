@class NSObject, NSMutableArray, SLProgressiveCheckerContext;
@protocol OS_dispatch_queue, SLProgressiveCheckerAnalyzerDelegate;

@interface SLProgressiveCheckerAnalyzer : NSObject {
    NSMutableArray *_activeRecognizers;
    SLProgressiveCheckerContext *_context;
    NSMutableArray *_checkerEndSamples;
    unsigned long long _analyzedSamplesSoFar;
    double _latestScore;
    NSObject<OS_dispatch_queue> *_queue;
    id<SLProgressiveCheckerAnalyzerDelegate> _delegate;
    unsigned long long _checkerType;
}

- (void)endAudio;
- (void).cxx_destruct;
- (void)_addAudio:(id)a0;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1 error:(id *)a2;
- (void)startNewRequestWithContext:(id)a0;
- (void)addAudio:(id)a0;
- (void)_endAudio;
- (void)_startNewRequestWithContext:(id)a0;

@end
