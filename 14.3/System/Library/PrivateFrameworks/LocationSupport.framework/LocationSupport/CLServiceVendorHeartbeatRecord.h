@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject

@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) Class svcClass;
@property (nonatomic) int residentCount;
@property (readonly, nonatomic) int synCount;
@property (readonly, nonatomic) int ackCount;

- (void)syn;
- (void)ack;
- (void).cxx_destruct;
- (id)initTrackingServiceClass:(Class)a0;

@end
