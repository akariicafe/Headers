@class NSString, PXVideoSessionManager, PXDisplayAssetVideoContentProvider;

@interface PXStoryVideoAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation <PXChangeObserver>

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } downloadTimeRange;
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager;
@property (retain) PXDisplayAssetVideoContentProvider *videoContentProvider;
@property (readonly, nonatomic) BOOL isExporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithDisplayAssetResource:(id)a0 mediaProvider:(id)a1;
- (id)initWithVideoAssetResource:(id)a0 mediaProvider:(id)a1 downloadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 videoSessionManager:(id)a3 isExporting:(BOOL)a4;
- (void)px_start;

@end
