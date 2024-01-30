@class RPLegacySession, RPDevice, RPLegacyDeviceDiscovery;

@interface RPDeviceContext : NSObject

@property (retain, nonatomic) RPDevice *device;
@property (retain, nonatomic) RPLegacyDeviceDiscovery *discovery;
@property (nonatomic) BOOL reported;
@property (retain, nonatomic) RPLegacySession *session;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)invalidate;
- (void)pairVerify;
- (void)systemInfoResponse:(id)a0 error:(id)a1;

@end
