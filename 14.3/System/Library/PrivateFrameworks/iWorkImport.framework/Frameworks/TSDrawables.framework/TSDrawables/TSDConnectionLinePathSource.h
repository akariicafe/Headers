@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x0; double x1; })a0 forType:(int)a1;
+ (id)pathSourceOfLength:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)bend;
- (BOOL)isCircular;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (id)description;
- (id)bezierPath;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (BOOL)isRectangular;
- (BOOL)isLineSegment;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })fixedPointForControlKnobChange;
- (id)initWithBezierPath:(id)a0;
- (void)p_setBezierPath:(id)a0;
- (long long)pathElementIndexForKnobTag:(unsigned long long)a0;

@end
