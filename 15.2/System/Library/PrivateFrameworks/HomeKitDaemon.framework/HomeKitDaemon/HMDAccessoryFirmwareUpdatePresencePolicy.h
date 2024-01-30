@class HMDHome;

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) BOOL presenceNeeded;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerForNotifications;
- (BOOL)evaluate;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)a0 presenceNeeded:(BOOL)a1 workQueue:(id)a2;
- (void)handlePresenceChange:(id)a0;

@end
