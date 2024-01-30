@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {
    double mCornerRadius;
    double mTailSize;
    struct CGPoint { double x; double y; } mTailPosition;
    struct CGSize { double width; double height; } mNaturalSize;
    BOOL mIsTailAtCenter;
}

@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double maxCornerRadius;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailKnobPosition;
@property (nonatomic) double tailSize;
@property (readonly, nonatomic) double maxTailSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailSizeKnobPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailCenter;
@property (readonly, nonatomic) BOOL isTailAtCenter;

+ (id)quoteBubbleWithTailPosition:(struct CGPoint { double x0; double x1; })a0 tailSize:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)calloutWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (unsigned long long)hash;
- (BOOL)isOval;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (BOOL)isRectangular;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (id)interiorWrapPath;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setCornerRadius:(double)a0;
- (void)p_setTailPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setTailSize:(double)a0;
- (void)p_setTailAtCenter:(BOOL)a0;
- (id)initWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3 tailAtCenter:(BOOL)a4;
- (struct CGPoint { double x0; double x1; })p_tailPosition;
- (id)p_basePath;
- (void)p_getTailPath:(id)a0 center:(struct CGPoint { double x0; double x1; } *)a1 tailSize:(double *)a2 intersections:(struct CGPoint { double x0; double x1; }[2])a3;
- (struct CGPoint { double x0; double x1; })p_adjustedCenterForPath:(id)a0;
- (id)p_buildPath;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;

@end
