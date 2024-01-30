@class GEOTileKeyList, NSObject;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRenderer : MKOverlayRenderer {
    GEOTileKeyList *_pendingRequests;
    NSObject<OS_dispatch_queue> *_pendingRequestsLock;
}

- (void)reloadData;
- (void).cxx_destruct;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithTileOverlay:(id)a0;
- (id)initWithOverlay:(id)a0;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)_mayExtendOutsideBounds;

@end
