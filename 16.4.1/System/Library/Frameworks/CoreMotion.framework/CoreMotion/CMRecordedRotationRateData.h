@class NSDate;

@interface CMRecordedRotationRateData : CMRotationRateData {
    double _startDateValue;
    struct { double x; double y; double z; } _rotationRate;
    double _timestampValue;
}

@property (readonly) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (double)timestamp;
- (id)description;
- (struct { double x0; double x1; double x2; })rotationRate;
- (id)initWithData:(struct CMGyro200 { float x0; float x1; float x2; float x3; unsigned long long x4; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2;

@end
