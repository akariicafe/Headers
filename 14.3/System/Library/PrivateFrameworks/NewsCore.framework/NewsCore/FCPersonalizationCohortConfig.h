@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double favoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double userBaseline;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) double paddingFactor;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFavoritedBoost:(double)a0 globalWeight:(double)a1 userBaseline:(double)a2 preBaselineCurvature:(double)a3 postBaselineCurvature:(double)a4 dilutionFactor:(double)a5 paddingFactor:(double)a6;
- (void)encodeWithCoder:(id)a0;

@end
