@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject

@property (nonatomic) unsigned short relRankFeature;
@property (nonatomic) unsigned short absRankFeature;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) id /* block */ comparator;

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)a0 absRankFeatureOut:(unsigned short *)a1 relRankFeatureOut:(unsigned short *)a2;
+ (id)_predicateForRelativeFeature:(unsigned long long)a0 currentTime:(double)a1;
+ (id)_relativeContextsForFeatures:(id)a0 currentTime:(double)a1;
+ (id /* block */)_resultComparatorForRelativeFeature:(unsigned long long)a0;
+ (id)relativeContextsForBundle:(id)a0 currentTime:(double)a1;
+ (id)relativeContextsForResultSetWithCurrentTime:(double)a0;

- (void).cxx_destruct;
- (id)initWithFeature:(unsigned long long)a0 currentTime:(double)a1;

@end
