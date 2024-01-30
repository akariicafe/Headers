@class NSNumber;

@interface MTRWindowCoveringClusterGoToLiftPercentageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *liftPercent100thsValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
