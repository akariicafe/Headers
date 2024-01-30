@class CRNormalizedPolyline;

@interface CRWordOutputRegion : CROutputRegion

@property (retain) CRNormalizedPolyline *baseline;

+ (id)wordWithTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 confidenceThresholdProvider:(id)a2;
+ (id)wordWithTextFeature:(id)a0 candidateIdx:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)wordWithText:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)wordWithCharacters:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (id)crCodableDataRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (unsigned long long)type;
- (id)contentBaselines;
- (id)joiningDelimeter;

@end
