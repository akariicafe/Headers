@class NSString, CIContext, PXGAssetImageCache, NSArray, NSMutableDictionary, PXGImageRequestQueue, NSObject, PXGThumbnailRequestQueue, NSMutableIndexSet, PXMediaProvider;
@protocol OS_dispatch_queue, PXGDisplayAssetPixelBufferSourcesProvider;

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider <PXGImageRequestPerformer> {
    NSObject<OS_dispatch_queue> *_drawingQueue;
    NSObject<OS_dispatch_queue> *_videoSessionsRequestQueue;
    PXGThumbnailRequestQueue *_requestQueue_thumbnailRequestQueue;
    NSMutableDictionary *_workQueue_textureStreamingSessionsMap;
    NSMutableIndexSet *_workQueue_textureRequestIDsWithDeliveredVideoFrames;
    NSMutableIndexSet *_workQueue_textureRequestIDsThatCannotBeSatisfiedWithThumbnails;
    PXGThumbnailRequestQueue *_workQueue_thumbnailRequestQueue;
    PXGImageRequestQueue *_workQueue_imageRequestQueue;
    NSMutableDictionary *_workQueue_deferredImageRequestBlocksByTextureID;
    CIContext *_workQueue_crossfadeRenderContext;
    NSObject<OS_dispatch_queue> *_cancelationQueue;
    NSMutableDictionary *_cancelationQueue_mediaRequestIDByTextureID;
    NSMutableDictionary *_cancelationQueue_deferredMediaRequestIDByTextureID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMutableIndexSet *_lookupLock_requestIDsWithDeliveredThumbnails;
    PXGAssetImageCache *_imageCache;
    BOOL _isLowSpec;
    NSArray *_requestOptions;
    struct CGImage { } *_lightPlaceholderImage;
    struct CGImage { } *_darkPlaceholderImage;
    struct CGSize { double width; double height; } _largestImageDataSpecSize;
    double _masterThumbnailShortSide;
    double _deferMediumRequestShortSideLimit;
}

@property double displayLinkLastTargetTimestamp;
@property (nonatomic) BOOL videoRequestsAllowed;
@property (readonly, nonatomic) BOOL wantsMipmaps;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) id<PXGDisplayAssetPixelBufferSourcesProvider> pixelBufferSourcesProvider;
@property (readonly, nonatomic) struct CGImage { } *placeholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)a0 dataSourceAfterChanges:(id)a1;

- (void)_setupRequestOptions;
- (void)releaseCachedResources;
- (void)_requestQueue_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 observer:(id)a1 textureRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 displayAssetFetchResult:(id)a3 presentationStyles:(unsigned long long)a4 targetSize:(struct CGSize { double x0; double x1; })a5 screenScale:(double)a6 adjustment:(id)a7 intent:(unsigned long long)a8 cannotBeSatisfiedWithThumbnail:(BOOL)a9;
- (struct __CVBuffer { } *)_workQueue_renderCrossfadeIfNeededWithPixelBuffer:(struct __CVBuffer { } *)a0 forVideoSession:(id)a1 textureRequestID:(id)a2;
- (void)_cancelationQueue_cancelImageRequests:(id)a0;
- (void)_requestQueue_handleThumbnailData:(id)a0 spec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; BOOL x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a1 forTextureRequestID:(int)a2;
- (void)_workQueue_provideCGImage:(struct CGImage { } *)a0 options:(struct { id x0; BOOL x1; })a1 isDegraded:(BOOL)a2 forRequestID:(int)a3;
- (void)_handleProvidePlaceholderForTextureRequestID:(int)a0;
- (void)_workQueue_provideVideoFrameForTextureStreamingSession:(id)a0;
- (id)initWithMediaProvider:(id)a0 pixelBufferSourcesProvider:(id)a1;
- (void)_workQueue_cancelTextureRequests:(id)a0;
- (void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)a0 presentationController:(id)a1 pixelBufferSource:(id)a2 adjustment:(id)a3 textureRequestID:(int)a4;
- (void)_workQueue_performRequestForDisplayAsset:(id)a0 textureRequestID:(int)a1 sharedState:(id)a2;
- (id)_requestOptionsForUseCase:(unsigned long long)a0 forDrawing:(BOOL)a1 intent:(unsigned long long)a2;
- (void)didFinishRequestingTextures;
- (void)_workQueue_cleanupTextureStreamingSession:(id)a0 textureRequestIDs:(id)a1;
- (BOOL)_imageSizeSatisfiedByThumbnail:(struct CGSize { double x0; double x1; })a0;
- (void)_workQueue_performDeferredImageRequest:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 textureRequestID:(int)a5;
- (void)_processThumbnailRequestsOnRequestQueue:(BOOL)a0;
- (void)dealloc;
- (void)_workQueue_didDeliverVideoContentForRequstID:(int)a0;
- (void)performRequestForSpriteIndex:(unsigned int)a0 textureRequestID:(int)a1 sharedState:(id)a2;
- (void)_updateMediumRequestShortSideLimit;
- (BOOL)_noteThumbnailAsDeliveredForRequestID:(int)a0;
- (void)_handlePixelBufferChangedForTextureStreamingSession:(id)a0;
- (id)init;
- (void)_workQueue_handleCGImageResult:(struct CGImage { } *)a0 orientation:(unsigned int)a1 info:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 adjustment:(id)a4 shouldCache:(BOOL)a5 textureRequestID:(int)a6;
- (void)setPreferBGRA:(BOOL)a0;
- (void)cancelTextureRequests:(id)a0;
- (void)_workQueue_processImageRequestsWithAllowedIDs:(id)a0;
- (void)registerImageDataSpecs:(id)a0;
- (void)_workQueue_updateTextureStreamingVisibility:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (void)interactionStateDidChange:(struct { long long x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; })a0;
- (void)_workQueue_processDeferredImageRequests;
- (void)lowMemoryModeDidChange;
- (void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned int)a0 spriteReference:(id)a1 displayAsset:(id)a2 presentationController:(id)a3 adjustment:(id)a4 presentationType:(int)a5 textureRequestID:(int)a6;
- (void).cxx_destruct;
- (BOOL)_hasDeliveredThumbnailForTextureRequestID:(int)a0;
- (void)_workQueue_handleResult:(struct CGImage { } *)a0 orientation:(long long)a1 info:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 mediaRequest:(id)a5 textureRequestID:(int)a6;

@end
