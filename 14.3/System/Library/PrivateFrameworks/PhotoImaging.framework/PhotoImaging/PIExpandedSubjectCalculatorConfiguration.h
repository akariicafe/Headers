@interface PIExpandedSubjectCalculatorConfiguration : NSObject

@property (class, readonly, nonatomic) PIExpandedSubjectCalculatorConfiguration *defaultConfiguration;
@property (class, readonly, nonatomic) PIExpandedSubjectCalculatorConfiguration *saliencyRevisionOneConfiguration;

@property (nonatomic) unsigned long long denistyThreshold;
@property (nonatomic) long long neighborhoodOffset;
@property (nonatomic) double saliencyThreshold;
@property (nonatomic) double saliencyDeltaThreshold;
@property (nonatomic) double initialSaliencyValue;
@property (nonatomic) BOOL useRegressedSaliencyBoxes;
@property (nonatomic) double unionIOUThreshold;
@property (nonatomic) double clusterToRegressedRatio;
@property (nonatomic) double regressedConfidenceThreshold;
@property (nonatomic) double highSaliencyThreshold;
@property (nonatomic) long long interSalientObjectDistance;
@property (nonatomic) unsigned long long maxSalientObjectsCount;
@property (nonatomic) double salientClusterConvergenceMaxDistance;

@end
