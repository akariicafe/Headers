@class NSArray;

@interface SLASRFeatures : NSObject

@property (retain, nonatomic) NSArray *latticePathMaxScores;
@property (retain, nonatomic) NSArray *latticePathMinScores;
@property (retain, nonatomic) NSArray *latticePathMeanScores;
@property (retain, nonatomic) NSArray *latticePathVarScores;
@property (retain, nonatomic) NSArray *topLatticePathScores;
@property (nonatomic) unsigned long long topLatticePathTokenCount;
@property (nonatomic) float snr;
@property (nonatomic) float trailingSilence;

- (void).cxx_destruct;

@end
