@class VCPVideoProcessor;

@interface VNVideoProcessor : NSObject {
    VCPVideoProcessor *_videoProcessor;
}

- (id)initWithURL:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 processingOptions:(id)a1 error:(id *)a2;
- (BOOL)addRequest:(id)a0 withProcessingOptions:(id)a1 error:(id *)a2;
- (BOOL)analyzeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 error:(id *)a1;
- (BOOL)analyzeWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 error:(id *)a1;
- (BOOL)removeRequest:(id)a0 error:(id *)a1;

@end
