@class NSArray;

@interface OFRescaler : NSObject {
    NSArray *_segments;
    double _sharedCompressibility1;
    double _sharedCompressibility2;
    double _sharedExpandability1;
    double _sharedExpandability2;
    double _compressibility1Weight;
    double _compressibility2Weight;
    double _expandability1Weight;
    double _expandability2Weight;
}

@property (readonly) double defaultDuration;
@property (readonly) double minimumDuration;
@property (readonly) double maximumDuration;

- (void)dealloc;
- (id)initWithSegments:(id)a0;
- (double)computeSegmentDurations:(double *)a0 forSpeedFactor:(double)a1;
- (double)computeSegmentDurations:(double *)a0 forTotalDuration:(double)a1;

@end
