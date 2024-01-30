@class NSNumber;

@interface MTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *onOffControl;
@property (copy, nonatomic) NSNumber *onTime;
@property (copy, nonatomic) NSNumber *offWaitTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
