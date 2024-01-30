@protocol BLSHRenderedFlipbookFrame;

@interface BLSHFlipbookHistoryFrame : BLSDiagnosticFlipbookFrame {
    id<BLSHRenderedFlipbookFrame> _lock_retainedHostFrame;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic, getter=isRetainingSurface) BOOL retainingSurface;
@property (readonly, nonatomic) unsigned long long retainedMemoryUsage;
@property (readonly, weak, nonatomic) id<BLSHRenderedFlipbookFrame> hostFrame;

- (id)initWithFrame:(id)a0;
- (struct __IOSurface { } *)surface;
- (id)description;
- (void).cxx_destruct;
- (struct __IOSurface { } *)rawSurface;
- (void)stopRetainingSurface;

@end
