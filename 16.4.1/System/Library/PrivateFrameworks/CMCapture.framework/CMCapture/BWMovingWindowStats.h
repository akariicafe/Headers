@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (double)min;
- (id)initWithWindowSize:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)max;
- (void)addDataPoint:(double)a0;
- (void)dealloc;
- (id)description;

@end
