@class NSDate;

@interface CMRecordedPressureData : CMAmbientPressureData {
    double _startDateValue;
    float _pressureValue;
    double _timestampValue;
    float _temperatureValue;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double startTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (struct { double x0; double x1; })ambientPressure;
- (void)resetWithData:(struct CMPressure { float x0; float x1; unsigned long long x2; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;
- (id)description;
- (double)timestamp;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithData:(struct CMPressure { float x0; float x1; unsigned long long x2; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;

@end
