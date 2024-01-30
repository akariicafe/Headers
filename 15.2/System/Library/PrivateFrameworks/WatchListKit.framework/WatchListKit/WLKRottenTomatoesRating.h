@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject

@property (readonly, nonatomic) unsigned long long freshness;
@property (readonly, copy, nonatomic) NSNumber *freshnessPercentage;

+ (unsigned long long)freshnessForString:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFreshness:(unsigned long long)a0 freshnessPercentage:(id)a1;

@end
