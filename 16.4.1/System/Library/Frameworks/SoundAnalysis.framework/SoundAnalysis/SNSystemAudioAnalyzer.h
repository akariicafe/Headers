@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> _impl;
}

+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (void)removeAllRequests;
- (void)stop;
- (id)init;
- (void)start;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;
- (id)initWithAudioConfiguration:(id)a0;

@end
