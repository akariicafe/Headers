@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) double weightedScore;
@property (readonly, nonatomic) unsigned long long prominentFeature;

+ (id)eventFeatureScoreWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;

- (unsigned long long)_hash;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEventFeatureScore:(id)a0;
- (id)initWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
