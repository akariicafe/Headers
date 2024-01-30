@class NSArray, NSUUID;

@interface VNTrajectoryObservation : VNObservation {
    NSUUID *_requestUUID;
}

@property (readonly, copy, nonatomic) NSArray *detectedPoints;
@property (readonly, copy, nonatomic) NSArray *projectedPoints;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ equationCoefficients;
@property (readonly, nonatomic) double movingAverageRadius;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;

@end
