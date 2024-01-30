@class NSArray, PIExpandedSubjectCalculatorConfiguration, VNSaliencyImageObservation;

@interface PIExpandedSubjectCalculator : NSObject

@property (readonly, copy, nonatomic) NSArray *regressedSalientSubjects;
@property (readonly, nonatomic) unsigned long long saliencyScale;
@property (readonly, nonatomic) PIExpandedSubjectCalculatorConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *detectedSubjects;
@property (readonly, copy, nonatomic) NSArray *saliencyData;
@property (readonly, copy, nonatomic) NSArray *expandedSubjects;
@property (nonatomic) unsigned long long subjectDirection;
@property (readonly, nonatomic) VNSaliencyImageObservation *saliencyImageObservation;

+ (void)consolidateCandidateSalientClusters:(id)a0 maxDistance:(double)a1;
+ (id)salientSubjectsWithImageRequestHandler:(id)a0;
+ (id)saliencyDataForSaliencyObservation:(id)a0;
+ (id)saliencyObservationWithImageRequestHandler:(id)a0;

- (void).cxx_destruct;
- (id)initWithDetectedSubjects:(id)a0 saliencyData:(id)a1 configuration:(id)a2;
- (id)initWithDetectedSubjects:(id)a0 cgImage:(struct CGImage { } *)a1;
- (id)initWithDetectedSubjects:(id)a0 ciImage:(id)a1 ciContext:(id)a2 configuration:(id)a3;
- (id)neighborsForPoint:(id)a0;
- (id)closestClusterForPoint:(id)a0 fromClusters:(id)a1;
- (void)clusterPoints:(id)a0 intoClusters:(id)a1;
- (id)findBestStartingPointForStartingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)findSalientPointsWithSaliencyScale:(float)a0 outsideOfSubjectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
