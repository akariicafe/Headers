@class NSObject;
@protocol OS_dispatch_group;

@interface PIVideoReframer : NSObject {
    struct shared_ptr<VRFSession> { struct VRFSession *__ptr_; struct __shared_weak_count *__cntrl_; } session;
    struct { long long width; long long height; } encodedPixelSize;
    long long orientation;
    union CenteredRect { struct { double x; double y; double w; double h; } ; struct { void /* unknown type, empty encoding */ xy; void /* unknown type, empty encoding */ wh; } ; void /* unknown type, empty encoding */ xywh; } pixelRect;
    union CenteredRect { struct { double x; double y; double w; double h; } ; struct { void /* unknown type, empty encoding */ xy; void /* unknown type, empty encoding */ wh; } ; void /* unknown type, empty encoding */ xywh; } clapRect;
    union CenteredRect { struct { double x; double y; double w; double h; } ; struct { void /* unknown type, empty encoding */ xy; void /* unknown type, empty encoding */ wh; } ; void /* unknown type, empty encoding */ xywh; } viewRect;
    NSObject<OS_dispatch_group> *processGroup;
}

@property (class, readonly) long long defaultRevision;

@property (copy, nonatomic) id /* block */ frameProvider;
@property (readonly, nonatomic) long long revision;

+ (union { struct { double x0; double x1; } x0; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x1; })defaultConfigForRevision:(long long)a0;
+ (id)reframerWithRevision:(long long)a0 encodedPixelSize:(struct { long long x0; long long x1; })a1 orientation:(long long)a2 clapRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 viewRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a4 config:(const union { struct { double x0; double x1; } x0; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x1; } *)a5;

- (double)confidence;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEncodedPixelSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1 clapRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 viewRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 config:(const union { struct { double x0; double x1; } x0; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x1; } *)a4;
- (void)startReframingAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateWithTrackedSubjects:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateWithEstimatedCameraMotion:(struct CGVector { double x0; double x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)finishReframingAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)processReframe:(id)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reframedViewRectAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
