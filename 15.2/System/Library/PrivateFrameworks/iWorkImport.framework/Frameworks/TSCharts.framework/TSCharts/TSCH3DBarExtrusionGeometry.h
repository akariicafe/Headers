@class TSCH3DNormalDirectionMapper;

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _normalizedSpine;
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

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (unsigned int)capOffset;
- (void)generateArrays;
- (unsigned int)geometryOffset;
- (int)geometryCount;
- (unsigned int)capCount;
- (void)p_insertCrossPointsIntoVector:(void *)a0;
- (void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const void *)a0 forSpineGenerator:(id)a1;
- (void)debug_printDataPoints;
- (id)selectionKnobPositions;

@end
