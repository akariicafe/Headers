@interface EQKitVSpace : EQKitBox

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double layoutHeight;
@property (readonly, nonatomic) double layoutDepth;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; struct Entry *x1; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; } x2; } x0; unsigned int x1; } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithHeight:(double)a0 depth:(double)a1;

@end
