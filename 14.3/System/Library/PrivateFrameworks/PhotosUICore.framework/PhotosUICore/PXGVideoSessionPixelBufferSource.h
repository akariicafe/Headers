@class NSString, PXVideoSession;

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
}

@property (nonatomic) long long desiredPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (copy, nonatomic) id /* block */ pixelBufferDidChangeHandler;

- (id)init;
- (id)initWithVideoSession:(id)a0;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1;
- (void)_prepareVideoSession;
- (void)_updateVideoSession:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;

@end
