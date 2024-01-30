@interface GateKeeper : CHLogger

@property BOOL hasDeviceBeenUnlockedSinceBoot;

+ (id)instance;

- (id)init;
- (void)cacheUnlockSinceBootState;
- (void)setupMobileKeyBag;
- (void)reFetch;

@end
