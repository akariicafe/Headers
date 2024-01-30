@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) double weightedScore;
@property (readonly, nonatomic) unsigned long long prominentFeature;

+ (id)eventFeatureScoreWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;
- (BOOL)isEqualToEventFeatureScore:(id)a0;

@end
