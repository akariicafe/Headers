@class NSURL;

@interface VCPShareSheetAssetProcessingTask : VCPMABaseTask <VCPMAImageProcessingTaskProtocol> {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    NSURL *_assetURL;
}

+ (id)taskWithPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 andCompletionHandler:(id /* block */)a2;
+ (id)taskWithAssetURL:(id)a0 options:(id)a1 andCompletionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)processObservations:(id)a0;
- (id).cxx_construct;
- (BOOL)run:(id *)a0;

@end
