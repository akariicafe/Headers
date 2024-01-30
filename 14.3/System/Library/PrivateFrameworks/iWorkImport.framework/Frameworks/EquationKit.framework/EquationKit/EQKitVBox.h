@interface EQKitVBox : EQKitCompoundBox

@property (readonly, nonatomic) unsigned long long pivotIndex;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)p_getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 fromDescendant:(id)a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; struct Entry *x1; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry *x0; } x2; } x0; unsigned int x1; } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cacheErasableBounds;
- (id)initWithChildBoxes:(id)a0;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1;

@end
