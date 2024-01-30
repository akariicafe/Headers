@class NSUUID;

@interface ICDrawingCommandData : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
}

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) struct CGColor { } *color;
@property (nonatomic) struct { struct CGPoint { double x; double y; } point; double radius; double opacity; double azimuth; double edgeWidth; double aspectRatio; double timestamp; } baseValues;
@property (nonatomic) struct { double baseAlpha; double blendAlpha; double targetMultiple; } parameters;
@property (readonly, nonatomic) unsigned int randomSeed;
@property BOOL isClipped;
@property (nonatomic) struct CGPoint { double x; double y; } clipOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } clipNormal;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct ICDrawingCommandID { unsigned int clock; NSUUID *replicaUUID; unsigned int subclock; } commandID;
@property (readonly, nonatomic) struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct *__begin_; struct *__end_; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct *__value_; } __end_cap_; } points;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqualDrawingCommandData:(id)a0;
- (double)renderCost;
- (BOOL)isEqual:(id)a0;
- (void)invalidateBounds;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; })readPointFromArchive:(const struct Point { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } *)a0 deltaFrom:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a1;
- (struct { double x0; double x1; double x2; })version1Parameters;
- (unsigned int)savePoint:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a0 deltaFrom:(const struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; } *)a1 toArchive:(struct Point { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } *)a2;
- (id)initWithArchive:(const struct Command { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct CommandID *x4; struct Color *x5; struct Point *x6; struct RepeatedPtrField<drawing::Point> { void **x0; int x1; int x2; int x3; } x7; struct CommandID *x8; struct Rectangle *x9; struct Point *x10; struct Point *x11; struct Parameters *x12; unsigned int x13; } *)a0 version:(unsigned int)a1 sortedUUIDs:(id)a2;
- (unsigned int)saveToArchive:(struct Command { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct CommandID *x4; struct Color *x5; struct Point *x6; struct RepeatedPtrField<drawing::Point> { void **x0; int x1; int x2; int x3; } x7; struct CommandID *x8; struct Rectangle *x9; struct Point *x10; struct Point *x11; struct Parameters *x12; unsigned int x13; } *)a0 sortedUUIDs:(id)a1 withPathData:(BOOL)a2 isHidden:(BOOL)a3;

@end
