@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _inputSpinePoints;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _spinePoints;
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> { void *__value_; } __end_cap_; } _scaleValues;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) long long bevelSlices;
@property (nonatomic) BOOL enableBevelEdges;
@property (readonly, nonatomic) long long bottomNonBevelStartIndex;
@property (readonly, nonatomic) long long bottomBevelStartIndex;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (void)generate;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void *)inputSpinePoints;
- (const void *)spinePoints;
- (const void *)scaleValues;
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
