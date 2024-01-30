@interface PIStillReframerConfiguration : NSObject

@property (nonatomic) double unwantedSubjectInclusionThreshold;
@property (nonatomic) double dominantToPeripheralSubjectRatioThreshold;
@property (nonatomic) double minimumCorrectionThreshold;
@property (nonatomic) double humanFaceBoundsContainmentThreshold;
@property (nonatomic) double humanBodyBoundsContainmentThreshold;
@property (nonatomic) double humanBodyExpandedBoundsContainmentThreshold;
@property (nonatomic) double humanBodyBoundsContainmentCoefficient;
@property (nonatomic) double petBoundsContainmentThreshold;
@property (nonatomic) double petExpandedBoundsContainmentThreshold;
@property (nonatomic) double petBoundsContainmentCoefficient;
@property (nonatomic) double facePaddingFactor;
@property (nonatomic) double bodyPaddingAmount;
@property (nonatomic) double overscanPercentageAllowed;
@property (nonatomic) double unwantedSubjectStartingThreshold;
@property (nonatomic) long long imageOrientation;

- (id)dictionaryRepresentation;

@end
