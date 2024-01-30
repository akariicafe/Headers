@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mInputSpinePoints;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mSpinePoints;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__begin_; struct tvec2<float> *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__value_; } __end_cap_; } mScaleValues;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) long long bevelSlices;
@property (nonatomic) BOOL enableBevelEdges;
@property (readonly, nonatomic) long long bottomNonBevelStartIndex;
@property (readonly, nonatomic) long long bottomBevelStartIndex;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (id)init;
- (void).cxx_destruct;
- (void)generate;
- (id).cxx_construct;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)inputSpinePoints;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)spinePoints;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)scaleValues;
- (void)createSpinePointArray;
- (void)generateTop;
- (void)generateBottom;
- (void)adjustBottomOffset;
- (void)resetAllScales;
- (void)adjustTopScales;
- (void)adjustBottomScales;
- (long long)bottomSlices;
- (long long)topSlices;
- (long long)topBevelStartIndex;
- (float)spineUValueAtIndex:(long long)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })bottomDirection;
- (float)scaleUValueAtIndex:(long long)a0;

@end
