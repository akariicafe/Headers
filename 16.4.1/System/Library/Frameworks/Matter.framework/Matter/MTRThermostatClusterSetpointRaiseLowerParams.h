@class NSNumber;

@interface MTRThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
