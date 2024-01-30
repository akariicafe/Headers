@class NSString, _PXAssetLoopUIView, PXVideoSessionUIView, PXImageRequester, PXVideoSession, UIView;

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile> {
    unsigned long long _requestCount;
    _PXAssetLoopUIView *_view;
    PXVideoSessionUIView *_videoView;
}

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredContentsRect;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestPlaybackTimeRange;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_updateVideoSession;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)_updateLayer;
- (void)_updateImageRequester;
- (void)_reloadVideoSessionIfNecessary;
- (void)_updateDesiredDynamicRange;

@end
