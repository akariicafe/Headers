@interface ARInertialState : NSObject <ARDaemonSecureCoding> {
    double _covarianceMatrix[225];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double *covarianceMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } orientation;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) void /* unknown type, empty encoding */ accelerometerBias;
@property (nonatomic) void /* unknown type, empty encoding */ gyroscopeBias;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCovarianceMatrix:(double *)a0;

@end
