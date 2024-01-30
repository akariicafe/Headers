@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying>

@property (copy, nonatomic) FCPersonalizationFeature *personalizationFeature;
@property (nonatomic) double clickPrior;
@property (nonatomic) double impressionPrior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
