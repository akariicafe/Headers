@interface TSCH3DSplineGenerator : NSObject {
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__begin_; struct tvec2<float> *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__value_; } __end_cap_; } mControlPts;
    struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } mSplineExclude;
}

@property (nonatomic) float detail;
@property (nonatomic) float tension;
@property (nonatomic) float adaptiveThreshold;

+ (id)generator;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isClosed;
- (id).cxx_construct;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)controlPts;
- (void)generatePoints:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)a0;
- (void)calcControlMatrix:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0 pointNum:(long long)a1;
- (struct vector<long, std::__1::allocator<long> > { long long *x0; long long *x1; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x0; } x2; } *)splineExclude;

@end
