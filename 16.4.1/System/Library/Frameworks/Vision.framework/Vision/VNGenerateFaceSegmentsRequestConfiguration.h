@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration {
    float _faceBoundingBoxExpansionRatio;
}

@property (class, readonly) float beginRangeFaceBoundingBoxExpansionRatio;
@property (class, readonly) float endRangeFaceBoundingBoxExpansionRatio;
@property (class, readonly) float defaultFaceBoundingBoxExpansionRatio;

@property (nonatomic) float faceBoundingBoxExpansionRatio;

+ (BOOL)expansionRatioWithinValidRange:(float)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
