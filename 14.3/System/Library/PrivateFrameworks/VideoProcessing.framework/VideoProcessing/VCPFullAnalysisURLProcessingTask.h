@class NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {
    BOOL _cancel;
    BOOL _noResultStrip;
    NSURL *_assetURL;
    NSURL *_pairedAssetURL;
    unsigned long long _analysisTypes;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

+ (id)taskForURLAsset:(id)a0 withOptions:(id)a1 analysisTypes:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (id)initWithURLAsset:(id)a0 withOptions:(id)a1 analysisTypes:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
