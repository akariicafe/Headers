@class NSArray;

@interface PRSRankingCosineComponents : NSObject

@property (retain, nonatomic) NSArray *termFrequencies;
@property (retain, nonatomic) NSArray *termFrequenciesWeighted;
@property (retain, nonatomic) NSArray *inverseDocFrequencies;
@property (retain, nonatomic) NSArray *termInverseDoc;
@property (retain, nonatomic) NSArray *termInverseDocWeighted;
@property (nonatomic) unsigned long long fieldLength;

- (void).cxx_destruct;

@end
