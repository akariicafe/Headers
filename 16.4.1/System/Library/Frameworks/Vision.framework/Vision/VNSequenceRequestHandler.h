@class VNSession, VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject {
    VNSession *_session;
    VNRequestPerformer *_requestPerformer;
}

+ (void)requestForcedCleanupWithOptions:(id)a0;
+ (void)forcedCleanupWithOptions:(id)a0;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)a0 completion:(id /* block */)a1;
+ (void)forcedCleanup;

- (BOOL)performRequests:(id)a0 onImageURL:(id)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onCIImage:(id)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 onCVPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 onCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 onCIImage:(id)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCIImage:(id)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onImageURL:(id)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 error:(id *)a2;
- (BOOL)_performRequests:(id)a0 onImageBuffer:(id)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCVPixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 gatheredForensics:(id *)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (BOOL)performRequests:(id)a0 onImageURL:(id)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (id)init;
- (BOOL)performRequests:(id)a0 onCIImage:(id)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 onCVPixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (id)initWithSession:(id)a0;
- (BOOL)performRequests:(id)a0 onImageURL:(id)a1 gatheredForensics:(id *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)performRequests:(id)a0 onCVPixelBuffer:(struct __CVBuffer { } *)a1 gatheredForensics:(id *)a2 error:(id *)a3;

@end
