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
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)detectedPointsInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (id)projectedPointsInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (id)vn_cloneObject;

@end
