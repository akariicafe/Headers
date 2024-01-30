@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {
    struct CGImage { } *_imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}

@property (readonly, copy, nonatomic) _FBSSnapshotContext *context;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSnapshotContext:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_scaledSnapshotSize;
- (BOOL)capture;
- (double)_scale;
- (void)_doInvalidate;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)a0;
- (void)invalidate;

@end
