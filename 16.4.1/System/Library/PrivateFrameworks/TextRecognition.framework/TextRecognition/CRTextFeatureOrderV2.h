@interface CRTextFeatureOrderV2 : NSObject <CRTextFeatureOrdering>

@property double angleThresholdForRotatedCrops;
@property long long textFeatureOrderMode;

+ (struct CGPoint { double x0; double x1; })_normalizePoint:(struct CGPoint { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;

- (struct CTLDRegion { int x0; float x1; float x2; float x3; float x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; struct CGPoint { double x0; double x1; } x7; struct CGPoint { double x0; double x1; } x8; float x9; struct vector<CRTextRecognition::CRCTLD::CTLDRegion, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion *x0; struct CTLDRegion *x1; struct __compressed_pair<CRTextRecognition::CRCTLD::CTLDRegion *, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion *x0; } x2; } x10; float x11; })CTLDRegionFromCRTextFeature:(id)a0 index:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 rotationAngle:(float)a3;
- (struct CRConstrainedTextLineDetectionImpl { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; int x8; int x9; float x10; float x11; BOOL x12; })createCoarseCTLD;
- (struct CRConstrainedTextLineDetectionImpl { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; int x8; int x9; float x10; float x11; BOOL x12; })createFineCTLD;
- (void)enforceQuadrilateralOrder:(struct CGPoint { double x0; double x1; } *)a0;
- (float)getFeaturesGlobalAngle:(id)a0;
- (float)getQuadrantOrientation:(id)a0;
- (id)initWithAngleThresholdForRotatedCrops:(double)a0;
- (id)orderAndGroupFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)singleCTLDGroupingPass:(struct CRConstrainedTextLineDetectionImpl { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; int x8; int x9; float x10; float x11; BOOL x12; } *)a0 textFeatures:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;

@end
