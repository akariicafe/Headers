@class PVMotionEffectTransformComponent, NSArray, PVMotionEffect;

@interface PVMotionEffectTextComponent : NSObject <PVMotionEffectComponent, PVEffectTextual> {
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } *_textObjectIDs;
    NSArray *_defaultAttributedStrings;
}

@property (weak, nonatomic) PVMotionEffect *motionEffect;
@property (weak, nonatomic) PVMotionEffectTransformComponent *transformComponent;

+ (id)parameterKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (void)dealloc;
- (int)orientation;
- (BOOL)isTextFlipped;
- (BOOL)supportsFlippingText;
- (BOOL)supportsOrientation;
- (id)defaultAttributedString:(unsigned long long)a0;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })textCornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 index:(unsigned long long)a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 scale:(struct CGPoint { double x0; double x1; })a4 viewSize:(struct CGSize { double x0; double x1; })a5 viewOrigin:(int)a6;
- (id)textEditingBoundsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 useParagraphBounds:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (void)beginTextEditing;
- (void)endTextEditing;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;
- (id)textEditingBounds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
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
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } *)_textObjectIDs:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)a0 documentInfo:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a1;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)a0 documentInfo:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a1;
- (BOOL)hasEmojiRenderingWorkaround;
- (void)setIsRightToLeft_NoLock:(BOOL)a0 documentInfo:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a1;
- (void)setupTitleParameters:(id)a0 documentInfo:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a1;
- (void)storeDefaultStrings:(const struct PVMotionDocumentInfo { void *x0; struct _OZXDocumentInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; double x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; unsigned int x14; unsigned int x15[16]; } x1; unsigned int x2; int x3; struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > *x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; struct CGSize { double x0; double x1; } x6; } *)a0;
- (BOOL)isRightToLeftWithCurrentLocale;
- (id)initWithEffect:(id)a0 transformComponent:(id)a1;

@end
