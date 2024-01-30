@class NSMutableArray;

@interface AccelerometerBuffer : NSObject {
    NSMutableArray *_accelBuffer;
    unsigned long long _bufferSize;
    struct { double x; double y; double z; } _movingSum;
    unsigned long long _sampleRate;
}

@property (nonatomic) double localMinBelowAverage;
@property (nonatomic) double localMaxAboveAverage;
@property (nonatomic) double localMin;
@property (nonatomic) double localMax;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (struct { double x0; double x1; double x2; double x3; })data;
- (id)logBuffer;
- (void)_fillAccelBufferBeforeFirstSampleTimestamp:(double)a0;
- (void)resetMovingSum;
- (id)initWithCapacity:(unsigned long long)a0 accelerometerSampleRateInHz:(unsigned long long)a1;
- (id)bufferWithMovingSum:(struct { double x0; double x1; double x2; } *)a0;
- (void)addData:(struct { double x0; double x1; double x2; })a0 timestamp:(double)a1;

@end
