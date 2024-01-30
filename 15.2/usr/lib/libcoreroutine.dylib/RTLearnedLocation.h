@class RTLocation;

@interface RTLearnedLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) unsigned long long dataPointCount;
@property (readonly, nonatomic) double confidence;

+ (id)shiftLocation:(id)a0 shifter:(id)a1;
+ (double)confidenceFromDataPointCount:(unsigned long long)a0 highConfidenceThreshold:(double)a1;
+ (id)removeOutlierLearnedLocationsWithLargeHorizontalUncertainty:(id)a0;

- (id)description;
- (id)initWithLearnedLocations:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMapItem:(id)a0 type:(unsigned long long)a1;
- (id)aggregateLearnedLocations:(id)a0 updateAltitude:(BOOL)a1;
- (id)initWithLocationOfInterest:(id)a0;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 type:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 confidence:(double)a2;
- (id)initWithChinaShiftedLearnedLocations:(id)a0 type:(unsigned long long)a1;
- (void)calculateAltitude:(double *)a0 verticalUncertainty:(double *)a1 learnedLocations:(id)a2;

@end
