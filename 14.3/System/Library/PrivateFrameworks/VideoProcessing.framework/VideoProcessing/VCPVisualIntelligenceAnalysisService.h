@class VCPTaskProcessingService;

@interface VCPVisualIntelligenceAnalysisService : NSObject {
    VCPTaskProcessingService *_service;
}

+ (id)service;

- (id)init;
- (void).cxx_destruct;
- (void)requestShareSheetProcessingForPixelBuffer:(struct __CVBuffer { } *)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
- (void)requestShareSheetProcessingForAssetURL:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;

@end
