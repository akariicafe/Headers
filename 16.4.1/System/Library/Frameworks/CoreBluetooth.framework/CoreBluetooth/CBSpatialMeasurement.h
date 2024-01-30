@class NSError, NSString;

@interface CBSpatialMeasurement : NSObject <CUXPCCodable>

@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalError;
@property (nonatomic) double verticalAngle;
@property (nonatomic) double verticalError;
@property (nonatomic) double distanceMeters;
@property (nonatomic) double distanceError;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double ptsScore;
@property (nonatomic) unsigned long long timestampTicks;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;

@end
