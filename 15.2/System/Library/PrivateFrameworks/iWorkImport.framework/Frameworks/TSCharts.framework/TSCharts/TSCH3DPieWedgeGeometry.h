@class TSCH3DNormalDirectionMapper;

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry

@property (nonatomic) float startAngle;
@property (nonatomic) float endAngle;
@property (nonatomic) long long angleSteps;
@property (nonatomic) long long radiusSteps;
@property (nonatomic) long long bevelEdgeSteps;
@property (nonatomic) float radius;
@property (nonatomic) float bottomZ;
@property (nonatomic) float topZ;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) unsigned int capCount;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (void).cxx_destruct;
- (id)init;
- (void)generateArrays;
- (int)geometryCount;
- (id)selectionKnobPositions;
- (float)bevelHeight;
- (void)generateRoundedTop:(void *)a0 radiusArray:(void *)a1;
- (void)p_generateBevelCoordinates:(void *)a0 andAngles:(void *)a1 radiusArray:(const void *)a2 topArray:(const void *)a3;
- (void)p_generateAngles:(void *)a0;
- (BOOL)isFullCircle;

@end
