@class NSArray, NSUUID;

@interface VNTrajectoryObservation : VNObservation

@property (copy, nonatomic) NSArray *detectedPoints;
@property (copy, nonatomic) NSArray *projectedPoints;
@property (nonatomic) void /* unknown type, empty encoding */ equationCoefficients;
@property (copy, nonatomic) NSUUID *requestUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestRevision:(SEL)a0 requestUUID:(unsigned long long)a1 trajectoryUUID:(id)a2 detectedPoints:(id)a3 projectedPoints:(id)a4 equationCoefficients:(id)a5 confidence:(float)a6;
- (void)encodeWithCoder:(id)a0;

@end
