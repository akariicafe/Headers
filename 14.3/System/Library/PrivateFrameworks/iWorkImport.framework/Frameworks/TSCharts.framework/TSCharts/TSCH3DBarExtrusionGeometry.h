@class TSCH3DNormalDirectionMapper;

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mNormalizedSpine;
}

@property (readonly, nonatomic) BOOL isCylindrical;
@property (readonly, nonatomic) BOOL hasTopBevel;
@property (readonly, nonatomic) BOOL hasBottomBevel;
@property (readonly, nonatomic) float size;
@property (nonatomic) struct BarExtrusionSetting { float size; BOOL hasTopBevel; BOOL hasBottomBevel; BOOL isCylindrical; BOOL isStackedBar; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float detail; float tension; float adaptiveThreshold; float creaseAngle; int crossType; } crossSection; struct BarExtrusionSpineDetails { float bevelHeight; long long bevelSlices; long long stride; float creaseAngle; } spine; } details; } extrusionSetting;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;
@property (readonly, nonatomic) float scaleMappingStartingHeight;
@property (readonly, nonatomic) float bottomCapScale;

+ (id)namedBevelInterpolationShaderFunction;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned int)capOffset;
- (void)generateArrays;
- (unsigned int)geometryOffset;
- (int)geometryCount;
- (unsigned int)capCount;
- (void)p_insertCrossPointsIntoVector:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)a0;
- (void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0 forSpineGenerator:(id)a1;
- (void)debug_printDataPoints;
- (id)selectionKnobPositions;

@end
