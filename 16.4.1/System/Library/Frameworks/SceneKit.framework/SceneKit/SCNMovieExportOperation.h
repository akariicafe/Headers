@class AVAssetWriterInput, AVAssetWriter, AVAssetWriterInputPixelBufferAdaptor;

@interface SCNMovieExportOperation : _SCNExportOperation {
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    AVAssetWriter *_assetWriter;
    float _rate;
    BOOL _mirrored;
    float _supersampling;
}

- (void)main;
- (void)dealloc;
- (void)_finishedExport;
- (struct CGImage { } *)_copySnapshot:(struct CGSize { double x0; double x1; })a0;
- (void)_setupMovieToWritableFile:(id)a0;
- (void)appendImage:(struct CGImage { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 usingAdaptor:(id)a2;
- (id)initWithRenderer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 attributes:(id)a2 outputURL:(id)a3;
- (void)renderAndAppendWithPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingAdaptor:(id)a1 metalTextureCache:(struct __CVMetalTextureCache { } *)a2 cvQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
