@class NSObject, FCPersonalizationFeature;
@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>

@property (copy, nonatomic) FCPersonalizationFeature *feature;
@property (nonatomic) double featureClickPrior;
@property (nonatomic) double featureImpressionPrior;
@property (copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
