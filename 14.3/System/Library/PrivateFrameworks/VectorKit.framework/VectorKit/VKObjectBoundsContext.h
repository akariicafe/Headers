@interface VKObjectBoundsContext : NSObject {
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *__begin_; struct Matrix<double, 2, 1> *__end_; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *__value_; } __end_cap_; } _points;
}

@property (nonatomic) struct VKEdgeInsets { float top; float left; float bottom; float right; } edgePadding;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingRect;
- (id).cxx_construct;
- (void)addPoints:(const struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *x0; struct Matrix<double, 2, 1> *x1; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *x0; } x2; } *)a0;

@end
