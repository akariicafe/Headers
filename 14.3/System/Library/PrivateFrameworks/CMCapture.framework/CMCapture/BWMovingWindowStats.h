@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (id)initWithWindowSize:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)max;
- (id)description;
- (double)min;
- (void)addDataPoint:(double)a0;

@end
