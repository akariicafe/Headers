@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject

@property (readonly, nonatomic) BOOL isMatching;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) BOOL isReliable;
@property (readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIsMatching:(BOOL)a0 score:(double)a1 isReliable:(BOOL)a2 requiredCriteria:(id)a3;

@end
