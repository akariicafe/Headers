@interface NFLRank : NSObject

@property (nonatomic) double rank;
@property (nonatomic) long long rankWeight;

+ (id)rankWithRank:(double)a0 rankWeight:(long long)a1;

- (id)description;

@end
