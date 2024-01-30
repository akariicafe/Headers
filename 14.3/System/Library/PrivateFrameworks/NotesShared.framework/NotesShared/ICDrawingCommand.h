@class ICDrawingCommandData, NSUUID;

@interface ICDrawingCommand : NSObject

@property (readonly, nonatomic) ICDrawingCommandData *data;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) struct TopoID { NSUUID *replicaID; unsigned int clock; } timestamp;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqualDrawingCommand:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCommand:(id)a0 hidden:(BOOL)a1 timestamp:(struct TopoID { id x0; unsigned int x1; })a2;
- (id)initWithArchive:(const struct Command { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct CommandID *x4; struct Color *x5; struct Point *x6; struct RepeatedPtrField<drawing::Point> { void **x0; int x1; int x2; int x3; } x7; struct CommandID *x8; struct Rectangle *x9; struct Point *x10; struct Point *x11; struct Parameters *x12; unsigned int x13; } *)a0 version:(unsigned int)a1 sortedUUIDs:(id)a2;
- (unsigned int)saveToArchive:(struct Command { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct CommandID *x4; struct Color *x5; struct Point *x6; struct RepeatedPtrField<drawing::Point> { void **x0; int x1; int x2; int x3; } x7; struct CommandID *x8; struct Rectangle *x9; struct Point *x10; struct Point *x11; struct Parameters *x12; unsigned int x13; } *)a0 sortedUUIDs:(id)a1 withPathData:(BOOL)a2;

@end
