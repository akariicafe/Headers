@class NSOperationQueue, NSObject;
@protocol OS_os_log;

@interface PXStoryExportManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *frequentSignpostLog;

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long maxConcurrentExportCount;
@property (nonatomic) long long qualityOfService;

+ (id)_appleIDCountry;
+ (id)_aspectDescriptionFromSize:(struct CGSize { double x0; double x1; })a0;
+ (id)_defaultPayloadForConfiguration:(id)a0;
+ (void)_incrementShareCountForMemory:(id)a0;
+ (id)collectAnalyticsForExportBeginWithConfiguration:(id)a0;
+ (void)collectAnalyticsForExportEndWithConfiguration:(id)a0 analyticsToken:(id)a1 model:(id)a2 withSuccess:(BOOL)a3 error:(id)a4;
+ (BOOL)collectAnalyticsForFixationWithAppleMusicAsset:(id)a0 configuration:(id)a1;
+ (void)collectDataContinuationAnalyticsForExportWithConfiguration:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAllExports;
- (id)requestExportWithDestinationURL:(id)a0 configuration:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
