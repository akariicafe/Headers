@class UIImage, PXImageRequest, NSString;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXImageRequester : PXObservable <PXMutableImageRequester> {
    struct { BOOL targetSize; BOOL imageRequest; BOOL isInCloud; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage;
@property (retain, nonatomic, setter=_setCurrentImageSourceAsset:) id<PXDisplayAsset> _currentImageSourceAsset;
@property (nonatomic, setter=_setHasFullQuality:) BOOL hasFullQuality;
@property (nonatomic, setter=_setIsInCloud:) BOOL isInCloud;
@property (retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest;
@property (nonatomic, setter=_setTargetSize:) struct CGSize { double width; double height; } _targetSize;
@property (nonatomic, setter=_setLoadingProgress:) double loadingProgress;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumRequestSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredContentsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptions;

- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handlePreloadedImageRequester:(id)a0;
- (void)setMaximumRequestSize:(struct CGSize { double x0; double x1; })a0;
- (void)setViewportSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1;
- (void)_invalidateIsInCloud;
- (void)_updateImageRequestIfNeeded;
- (void)_handleProgressForImageRequest:(id)a0 progress:(double)a1;
- (void)_handleResultOfImageRequest:(id)a0 image:(id)a1 info:(id)a2;
- (void)_updateIsInCloudIfNeeded;
- (void)_cancelRequests;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didPerformChanges;
- (void)_invalidateTargetSize;
- (void)setMediaProvider:(id)a0;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)_updateTargetSizeIfNeeded;
- (void)_invalidateImageRequest;
- (void)setScale:(double)a0;
- (void)handlePreloadedImage:(id)a0;
- (void)setDesiredContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
