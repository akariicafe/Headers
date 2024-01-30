@class VKImageAnalyzerMadInterface, VKAnalyticsProcessor, NSObject;
@protocol OS_dispatch_queue, VKAnalyzerAnalyticsDelegate;

@interface VKImageAnalyzer : NSObject

@property (class, readonly, nonatomic) BOOL deviceSupportsImageAnalysis;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *realCallbackQueue;
@property (retain, nonatomic) VKImageAnalyzerMadInterface *mad;
@property (weak, nonatomic) id<VKAnalyzerAnalyticsDelegate> _analyticsDelegate;
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL createFeedbackProviders;

- (void)cancelAllRequests;
- (int)processRequest:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelRequestID:(int)a0;
- (unsigned long long)statusForRequestID:(int)a0;
- (void)updateForLiveTextSupport;
- (int)_processRequest:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_forceInProcessAnalysis;

@end
