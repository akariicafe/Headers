@class FCPersonalizationFeature;

@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying>

@property (copy, nonatomic) FCPersonalizationFeature *targetSectionFeature;
@property (nonatomic) double targetSectionFeatureClickPrior;
@property (nonatomic) double targetSectionFeatureImpressionPrior;
@property (copy, nonatomic) FCPersonalizationFeature *competingSectionFeature;
@property (nonatomic) double competingSectionFeatureClickPrior;
@property (nonatomic) double competingSectionFeatureImpressionPrior;
@property (nonatomic) double scalar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
