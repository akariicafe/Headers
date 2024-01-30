@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData {
    double _startDateValue;
    struct { double x; double y; double z; } _accelerationValue;
    double _timestampValue;
}

@property (readonly) double startTime;
@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; double x2; })acceleration;
- (void)dealloc;
- (double)timestamp;
- (id)description;
- (id)initWithData:(struct CMAccel100 { float x0; float x1; float x2; unsigned long long x3; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;
- (void)resetWithData:(struct CMAccel100 { float x0; float x1; float x2; unsigned long long x3; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;

@end
