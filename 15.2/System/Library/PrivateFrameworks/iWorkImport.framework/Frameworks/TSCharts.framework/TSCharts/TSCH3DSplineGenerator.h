@interface TSCH3DSplineGenerator : NSObject {
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> { void *__value_; } __end_cap_; } _controlPts;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _splineExclude;
}

@property (nonatomic) float detail;
@property (nonatomic) float tension;
@property (nonatomic) float adaptiveThreshold;

+ (id)generator;

- (BOOL)isClosed;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void *)controlPts;
- (void)generatePoints:(void *)a0;
- (void)calcControlMatrix:(void *)a0 pointNum:(long long)a1;
- (void *)splineExclude;

@end
