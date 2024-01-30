@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService

@property (readonly) VCPHomeKitAnalysisService *remote;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancelTask:(int)a0;
- (int)submitTaskWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
