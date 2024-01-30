@class RTVisitDecoder, RTVisitHyperParameter, RTVisitCluster, NSArray, NSString, RTLocation;
@protocol RTVisitModelController;

@interface RTVisitPipelineModuleTrajectorySequenceCluster : NSObject <RTVisitPipelineModule> {
    double _sumOfNorthing;
    double _sumOfEasting;
    double _sumOfSquaredNorthing;
    double _sumOfSquaredEasting;
    RTLocation *_referenceLocation;
}

@property (readonly, nonatomic) id<RTVisitModelController> trajectorySequenceClassifier;
@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (readonly, nonatomic) RTVisitDecoder *decoder;
@property (readonly, nonatomic) RTVisitCluster *workingVisitCluster;
@property (readonly, nonatomic) unsigned long long numOfLocations;
@property (readonly, nonatomic) NSArray *residualLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)normalizeFeature:(double)a0 min:(double)a1 max:(double)a2;

- (id)process:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clearWorkingVisitCluster;
- (BOOL)computeFeatureVector:(float *)a0 cumSumNumLocations:(unsigned long long)a1 cumSumNorthings:(double *)a2 cumSumEastings:(double *)a3 cumSumSquaredNorthings:(double *)a4 cumSumSquaredEastings:(double *)a5 sequenceLength:(unsigned long long)a6;
- (float *)computeFeatureVectorFromLocalFramesNumOfLocations:(unsigned long long)a0 northings:(const double *)a1 eastings:(const double *)a2 sequenceLength:(unsigned long long)a3;
- (float *)computeFeatureVectorFromLocations:(id)a0 start:(unsigned long long)a1 end:(unsigned long long)a2;
- (double)computeRadiusFromCumSumNorthings:(const double *)a0 cumSumEastings:(const double *)a1 cumSumSquaredNorthings:(const double *)a2 cumSumSuaredEastings:(const double *)a3 firstLocationIndex:(unsigned long long)a4 lastLocationIndex:(unsigned long long)a5;
- (id)createVisitWithLocations:(id)a0 entryDate:(id)a1 exitDate:(id)a2;
- (id)initWithVisitTrajectorySequenceClassifier:(id)a0 hyperParameter:(id)a1;
- (unsigned long long)numLocationsFrom:(unsigned long long)a0;
- (id)performBatchInferenceWithFeatureVector:(const float *)a0 featureVectorLength:(unsigned long long)a1 start:(unsigned long long)a2 firstTimeStepDate:(id)a3;
- (unsigned long long)sequenceIndexFromDate:(id)a0 firstTimeStepDate:(id)a1;
- (unsigned long long)sequenceLengthFrom:(unsigned long long)a0;
- (unsigned long long)startLocationIndex:(unsigned long long)a0;

@end
