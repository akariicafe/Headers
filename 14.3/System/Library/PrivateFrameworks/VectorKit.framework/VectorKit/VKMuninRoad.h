@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (void)dealloc;
- (id)initWithLocalizedName:(const char *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMuninRoadEdge:(const struct MuninRoadEdge { struct *x0; float x1; struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, mdm::Allocator> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, mdm::Allocator> >::__rep, geo::StdAllocator<char, mdm::Allocator> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; struct StdAllocator<char, mdm::Allocator> { struct Allocator *x0; } x1; } x0; } x2; struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; } x3; unsigned long long x4; unsigned long long x5; struct MuninJunction *x6; struct MuninJunction *x7; BOOL x8; } *)a0 localize:(BOOL)a1;

@end
