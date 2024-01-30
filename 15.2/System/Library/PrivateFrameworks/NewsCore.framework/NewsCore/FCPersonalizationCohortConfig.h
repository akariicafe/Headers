@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL considerPublisherTopicAggregates;
@property (nonatomic) double democratizationFactor;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) BOOL enableUndampening;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double exponentialFavoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double globalWeightHalfLife;
@property (nonatomic) double globalWeightInitialMultiplier;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) BOOL undampenOnlyAboveBaselineMembership;
@property (nonatomic) double userBaseline;
@property (nonatomic) BOOL useRelativePersonalizationValue;
@property (nonatomic) BOOL useExponentialFavoritedBoost;

- (id)initWithConfigDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConsiderPublisherTopicAggregates:(BOOL)a0 democratizationFactor:(double)a1 dilutionFactor:(double)a2 enableUndampening:(BOOL)a3 favoritedBoost:(double)a4 exponentialFavoritedBoost:(double)a5 globalWeight:(double)a6 globalWeightHalfLife:(double)a7 globalWeightInitialMultiplier:(double)a8 paddingFactor:(double)a9 preBaselineCurvature:(double)a10 postBaselineCurvature:(double)a11 undampenOnlyAboveBaselineMembership:(BOOL)a12 userBaseline:(double)a13 useRelativePersonalizationValue:(BOOL)a14 useExponentialFavoritedBoost:(BOOL)a15;

@end
