@class PXVideoSession, NSString;

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    NSString *_bufferRequestIdentifier;
}

@property (readonly, nonatomic) PXVideoSession *videoSession;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxOutputSize;
@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (copy, nonatomic) id /* block */ pixelBufferDidChangeHandler;
@property (copy, nonatomic) id /* block */ providePlaceholderHandler;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)dealloc;
- (id)initWithVideoSession:(id)a0 maxOutputSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
