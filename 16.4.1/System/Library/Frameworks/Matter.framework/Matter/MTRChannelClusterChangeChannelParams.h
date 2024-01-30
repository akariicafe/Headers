@class NSString, NSNumber;

@interface MTRChannelClusterChangeChannelParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *match;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
