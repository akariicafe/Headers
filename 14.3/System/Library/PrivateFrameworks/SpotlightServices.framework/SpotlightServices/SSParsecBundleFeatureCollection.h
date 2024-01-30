@class NSNumber;

@interface SSParsecBundleFeatureCollection : NSObject

@property (retain, nonatomic) NSNumber *numResults;
@property (retain, nonatomic) NSNumber *maxScore;
@property (retain, nonatomic) NSNumber *originalOrderAbsRank;
@property (retain, nonatomic) NSNumber *originalOrderRelRank;
@property (retain, nonatomic) NSNumber *maxCEPAbsRank;
@property (retain, nonatomic) NSNumber *maxCEPRelRank;
@property (retain, nonatomic) NSNumber *cep;
@property (retain, nonatomic) NSNumber *cepMaxRatio;
@property (retain, nonatomic) NSNumber *cepAllMaxRatio;
@property (retain, nonatomic) NSNumber *blockIdValue;
@property (retain, nonatomic) NSNumber *maxScoreAbsRank;
@property (retain, nonatomic) NSNumber *maxScoreRelRank;

- (void).cxx_destruct;
- (id)description;

@end
