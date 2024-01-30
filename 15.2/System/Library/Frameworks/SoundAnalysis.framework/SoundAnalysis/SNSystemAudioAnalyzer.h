@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> _impl;
}

+ (id)selectAppropriateImplForThisProcess;
+ (void)configureNewAnalyzersToComputeInThisProcess:(BOOL)a0;

- (id)initWithImpl:(id)a0;
- (void)removeAllRequests;
- (void)start;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (id)init;
- (void)stop;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (id)initWithAudioConfiguration:(id)a0;
- (void)addRequestInBackground:(id)a0 withObserver:(id)a1;

@end
