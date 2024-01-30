@class NSMutableArray;

@interface RTParkingQualityProvider : NSObject

@property (retain, nonatomic) NSMutableArray *movingHistorgram;
@property (nonatomic) unsigned long long parkingQualityIndicator;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)getCdfFromHistogram:(id)a0 numSamples:(double)a1;
- (unsigned long long)calculateParkingQualityWithLocations:(id)a0 parkingTimestamp:(double)a1;
- (unsigned long long)classifySamples:(id)a0;
- (id)getHistogramFromSamples:(id)a0;
- (int)indexOfSmallestElement:(double *)a0 size:(int)a1;
- (unsigned long long)parkingQualityToLocationQuality:(unsigned long long)a0;

@end
