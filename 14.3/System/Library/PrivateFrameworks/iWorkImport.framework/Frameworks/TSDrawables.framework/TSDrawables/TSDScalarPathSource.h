@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double scalar;
@property (readonly, nonatomic) double maxScalar;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (nonatomic) BOOL isCurveContinuous;

+ (id)regularPolygonWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(int)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)rectangleWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
+ (id)chevronWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)roundedRectangleWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1 continuousCurve:(BOOL)a2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (BOOL)isRectangular;
- (void)setScalarValue:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (struct CGSize { double x0; double x1; })scaleFactorForInscribedRectangle;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRegularPolygon;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForChevron;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForChevron:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)p_newRoundedRectPath;
- (struct CGPath { } *)p_newRegularPolygonPath;
- (struct CGPath { } *)p_newChevronPath;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;
- (id)initWithType:(int)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2 continuousCurve:(BOOL)a3;

@end
