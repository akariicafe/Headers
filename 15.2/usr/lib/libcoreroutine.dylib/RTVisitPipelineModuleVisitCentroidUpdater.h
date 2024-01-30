@class NSString, RTDistanceCalculator, RTVisitHyperParameter, RTLocationManager;

@interface RTVisitPipelineModuleVisitCentroidUpdater : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) unsigned int invalidBinIndex;
@property (readonly, nonatomic) unsigned int *binCounts;
@property (readonly, nonatomic) unsigned long long binCountsSize;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHyperParameter:(id)a0 locationManager:(id)a1 distanceCalculator:(id)a2;
- (unsigned long long)modeBinIndex;
- (void)updateCountFromNorthing:(double)a0 easting:(double)a1;
- (id)_updateVisitCentroidBasedOnFilteredLocations:(id)a0 maxHorizontalAccuracy:(double)a1;
- (void).cxx_destruct;
- (id)_updateHorizontalUncertainty:(id)a0;
- (id)init;
- (id)modeWithReferenceLocation:(id)a0;
- (id)process:(id)a0;
- (void)dealloc;
- (id)_updateVisitCentroidBasedOnMode:(id)a0;

@end
