@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService

@property (readonly) VCPHomeKitAnalysisService *remote;

+ (id)logCategory;

- (BOOL)cancelTask:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (int)submitTaskWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
