@class PXImageUIView, NSString, PXImageRequester, PXImageViewSpec, UIView;

@interface PXUIImageTile : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL imageView; BOOL imageRequester; BOOL image; } _needsUpdateFlags;
    PXImageUIView *_imageView;
    unsigned long long _animationFlags;
}

@property (retain, nonatomic, setter=_setSpec:) PXImageViewSpec *_spec;
@property (nonatomic, setter=_setContentSize:) struct CGSize { double width; double height; } _contentSize;
@property (nonatomic, setter=_setDisplayScale:) double _displayScale;
@property (nonatomic, setter=_setContentsRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentsRect;
@property (nonatomic, setter=_setAnimationCount:) long long _animationCount;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) BOOL drawsFocusRing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

- (void)_performChanges:(id /* block */)a0;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImage;
- (void)_invalidateImageView;
- (void)_updateImageIfNeeded;
- (void)becomeReusable;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)_invalidateImageRequester;
- (void)_updateImageRequesterIfNeeded;

@end
