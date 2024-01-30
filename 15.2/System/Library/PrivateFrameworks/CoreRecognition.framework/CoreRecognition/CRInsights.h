@class NSMutableDictionary;
@protocol CRInsightsDelegate;

@interface CRInsights : NSObject

@property (retain, nonatomic) NSMutableDictionary *threadsToContexts;
@property (weak) id<CRInsightsDelegate> delegate;

+ (id)sharedInsights;
+ (void)dispatchAsyncOnQueue:(id)a0 block:(id /* block */)a1;

- (id)currentContext;
- (void).cxx_destruct;
- (id)init;
- (void)setContextValue:(id)a0 forKey:(id)a1;
- (void)attachContextToCurrentThread:(id)a0;
- (id)cameraReaderForCurrentThread;
- (void)resetContextForCurrentThread;
- (id)allowOverrideWithKey:(id)a0 forValue:(id)a1;
- (id)takeContextSnapshot;
- (void)attachContextCopyToCurrentThread:(id)a0;
- (void)attachNewContextToCurrentThreadWithCameraReader:(id)a0;
- (void)notifySampleBufferProcessingStart:(struct opaqueCMSampleBuffer { } *)a0;
- (void)notifySampleBufferProcessingEnd:(struct opaqueCMSampleBuffer { } *)a0;
- (void)provideInsightValue:(id)a0 forKey:(id)a1;
- (id)enterSection:(id)a0 withDescription:(id)a1;
- (void)leaveSection:(id)a0;
- (id)allowOverrideWithKey:(id)a0 forResultFromBlock:(id /* block */)a1;

@end
