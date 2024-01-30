@interface REContentRankingResult : NSObject

@property (nonatomic) BOOL valid;
@property (nonatomic) double positivePolarity;
@property (nonatomic) double negativePolarity;
@property (nonatomic) int unknownCount;
@property (nonatomic) double unbiasedPositivePolarity;
@property (nonatomic) double unbiasedNegativePolarity;

@end
