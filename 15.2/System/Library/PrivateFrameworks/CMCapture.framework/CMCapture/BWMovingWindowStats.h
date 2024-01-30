@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (double)min;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWindowSize:(int)a0;
- (void)addDataPoint:(double)a0;
- (double)max;
- (void)dealloc;

@end
