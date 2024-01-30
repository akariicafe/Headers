@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

@property int type;
@property struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;

+ (id)rightSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)doubleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)starWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(int)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)plusWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setPointValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (BOOL)isRectangular;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (id)initWithType:(int)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForArrow;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarPoints;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForArrow:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForPlus:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)p_newArrowPath;
- (struct CGPath { } *)p_newStarPath;
- (struct CGPath { } *)p_newPlusPath;
- (BOOL)p_isRightFacingArrow;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })minPointValue;
- (struct CGPoint { double x0; double x1; })maxPointValue;
- (struct CGSize { double x0; double x1; })scaleFactorForInscribedRectangle;
- (BOOL)p_isFlippedDoubleArrow;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;

@end
