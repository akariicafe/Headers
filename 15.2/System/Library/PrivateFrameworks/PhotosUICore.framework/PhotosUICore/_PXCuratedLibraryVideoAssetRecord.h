@class NSString, PXGSpriteReference, NSObject, PXVideoSession;
@protocol OS_dispatch_queue;

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    double _videoTranformScale;
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    long long _desiredPlayState;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *videoSessionQueue;

@property (readonly, nonatomic) PXGSpriteReference *geometryReference;
@property (readonly, nonatomic) NSString *videoStatusDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (copy, nonatomic) id /* block */ pixelBufferDidChangeHandler;
@property (copy, nonatomic) id /* block */ providePlaceholderHandler;

- (BOOL)isPlaying;
- (void)setDesiredPlayState:(long long)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (long long)desiredPlayState;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2;
- (void)prepareForVisible;
- (void)prepareForInvisible;
- (void)_videoQueue_ensureVideoSession;
- (void)_videoQueue_relinquishVideoSession;
- (void)_configureVideoSession:(id)a0;

@end
