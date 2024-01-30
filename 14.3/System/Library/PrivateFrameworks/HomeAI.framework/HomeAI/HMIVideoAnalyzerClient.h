@class NSString, NSObject, VCPHomeKitAnalysisSession;
@protocol OS_dispatch_queue;

@interface HMIVideoAnalyzerClient : HMIVideoAnalyzer <HMFLogging> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) VCPHomeKitAnalysisSession *remote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)cancel;
- (void)finish;
- (void).cxx_destruct;
- (void)flushAsync;
- (void)flush;
- (void)_didFailWithError:(id)a0;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)setAnalysisFPS:(double)a0;
- (void)setMonitored:(BOOL)a0;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMessageWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendMessage:(SEL)a0 arguments:(id)a1 asynchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_sendMessageWithOptions:(id)a0 asynchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_sendMessage:(SEL)a0 arguments:(id)a1 asynchronous:(BOOL)a2;

@end
