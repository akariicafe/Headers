@class NSNumber;

@interface MTRChannelClusterChangeChannelByNumberParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *majorNumber;
@property (copy, nonatomic) NSNumber *minorNumber;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
