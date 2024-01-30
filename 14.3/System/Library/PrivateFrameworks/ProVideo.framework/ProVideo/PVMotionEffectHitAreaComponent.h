@class PVMotionEffectTransformComponent, PVMotionEffect;

@interface PVMotionEffectHitAreaComponent : NSObject <PVMotionEffectComponent, PVEffectHitArea>

@property (weak, nonatomic) PVMotionEffect *motionEffect;
@property (weak, nonatomic) PVMotionEffectTransformComponent *transformComponent;

+ (id)parameterKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (id)hitAreaPointsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 scale:(struct CGPoint { double x0; double x1; })a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewOrigin:(int)a5;
- (void)didLoad:(BOOL)a0;
- (void)didUnload;
- (void)updateProperties:(id)a0 allProperties:(id)a1;
- (void)documentDidStartLoading;
- (void)documentDidLoad:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0;
- (void)documentWillOpenMedia:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0 properties:(id)a1;
- (void)documentDidBecomeReady:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0 properties:(id)a1;
- (void)documentWillRender:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0 properties:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)documentDidFailToLoad;
- (void)documentDidUnload;
- (BOOL)propertiesDisableCache:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isAtPosterFrame:(BOOL)a2;
- (id)parameterKeysThatInvalidateCache;
- (BOOL)didCacheInvalidatingParameterChange:(id)a0 parameterA:(id)a1 parameterB:(id)a2;
- (id)initWithEffect:(id)a0 transformComponent:(id)a1;

@end
