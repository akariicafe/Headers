@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> _impl;
}

+ (id)selectAppropriateImplForThisProcess;
+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (void)removeRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithImpl:(id)a0;
- (void)removeAllRequests;
- (void)start;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;

@end
