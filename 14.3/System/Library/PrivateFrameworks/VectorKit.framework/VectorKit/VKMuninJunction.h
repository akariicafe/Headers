@class NSString, NSMutableArray;

@interface VKMuninJunction : NSObject

@property (readonly, nonatomic) NSMutableArray *roads;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)initWithMuninJunction:(const struct MuninJunction { void /* function */ **x0; struct *x1; struct Mercator2<double> { double x0[2]; } x2; struct Matrix<float, 2, 1> { float x0[2]; } x3; struct vector<const md::MuninRoadEdge *, std::__1::allocator<const md::MuninRoadEdge *> > { struct MuninRoadEdge **x0; struct MuninRoadEdge **x1; struct __compressed_pair<const md::MuninRoadEdge **, std::__1::allocator<const md::MuninRoadEdge *> > { struct MuninRoadEdge **x0; } x2; } x4; int x5; unsigned char x6; unsigned char x7; } *)a0 localize:(BOOL)a1;

@end
