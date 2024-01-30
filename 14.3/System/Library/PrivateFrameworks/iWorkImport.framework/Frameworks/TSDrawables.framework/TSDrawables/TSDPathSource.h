@class TSUBezierPath, NSString;

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>

@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) BOOL isRectangularForever;
@property (readonly, nonatomic) BOOL isCircular;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPathWithoutFlips;
@property (readonly, copy, nonatomic) TSUBezierPath *interiorWrapPath;
@property (readonly, nonatomic) Class preferredControllerClass;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) BOOL isClosed;
@property (nonatomic) BOOL hasHorizontalFlip;
@property (nonatomic) BOOL hasVerticalFlip;
@property (readonly, nonatomic, getter=isClosed) BOOL closed;
@property (copy, nonatomic) NSString *localizationKey;
@property (copy, nonatomic) NSString *userDefinedIdentifier;
@property (copy, nonatomic) NSString *userDefinedName;
@property (readonly, nonatomic) NSString *inferredAccessibilityDescription;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } pathFlipTransform;

+ (id)pathSourceForShapeType:(long long)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)loadSharedFromArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (void)saveSharedToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (id)interiorWrapPathForInset:(double)a0 joinStyle:(unsigned long long)a1;

@end
