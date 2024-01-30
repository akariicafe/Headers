@interface HMFPowerLogger : HMFObject

+ (id)sharedPowerLogger;

- (void)reportIncomingIDSPush:(id)a0 fromToken:(id)a1;
- (void)reportIncomingCloudPush:(id)a0;
- (void)reportIncomingLoxyMessage:(id)a0;
- (void)reportConnection:(id)a0 linkType:(long long)a1 accessoryCategory:(id)a2;
- (id)linkTypeDescription:(long long)a0;
- (void)reportIncomingAdvertisementChange:(id)a0 accessoryCategory:(id)a1;
- (void)reportIncomingIPEvent:(id)a0 accessoryCategory:(id)a1;
- (void)reportConnection:(id)a0 linkType:(long long)a1;
- (void)reportIncomingAdvertisementChange:(id)a0;
- (void)reportIncomingIPEvent:(id)a0;

@end
