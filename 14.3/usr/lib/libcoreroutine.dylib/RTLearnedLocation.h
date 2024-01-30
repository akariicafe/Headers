@class RTLocation;

@interface RTLearnedLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) unsigned long long dataPointCount;
@property (readonly, nonatomic) double confidence;

+ (double)confidenceFromDataPointCount:(unsigned long long)a0;
+ (id)shiftLocation:(id)a0 shifter:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMapItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 confidence:(double)a2;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1;
- (id)initWithLearnedLocations:(id)a0;
- (id)initWithLocationOfInterest:(id)a0;
- (void)calculateAltitude:(double *)a0 verticalUncertainty:(double *)a1 learnedLocations:(id)a2;

@end
