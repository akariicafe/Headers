@class DCNoCopyDictionary, VKImageAnalyzer, NSObject;
@protocol OS_dispatch_queue;

@interface DCImageAnalyzerManager : NSObject {
    VKImageAnalyzer *_imageAnalyzer;
    DCNoCopyDictionary *_cachedAnalyses;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)sharedInstance;
+ (BOOL)isImageAnalysisEnabled;

- (void)cleanup;
- (void).cxx_destruct;
- (id)init;
- (void)analysisForImage:(id)a0 completionHandler:(id /* block */)a1;

@end
