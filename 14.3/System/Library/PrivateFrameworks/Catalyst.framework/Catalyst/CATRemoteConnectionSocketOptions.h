@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject

@property (copy, nonatomic) NSNumber *adaptiveWriteTimeout;
@property (copy, nonatomic) NSNumber *keepAliveEnabled;
@property (copy, nonatomic) NSNumber *keepAliveDelay;
@property (copy, nonatomic) NSNumber *keepAliveInterval;
@property (copy, nonatomic) NSNumber *keepAliveCount;
@property (copy, nonatomic) NSNumber *netServiceType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
