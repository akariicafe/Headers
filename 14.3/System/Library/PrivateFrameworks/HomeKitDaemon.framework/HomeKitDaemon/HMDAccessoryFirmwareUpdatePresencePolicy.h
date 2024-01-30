@class HMDHome, NSString;

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, NSCopying>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) BOOL presenceNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluate;
- (BOOL)isEqual:(id)a0;
- (void)handlePresenceChange:(id)a0;
- (id)initWithHome:(id)a0 presenceNeeded:(BOOL)a1 workQueue:(id)a2;

@end
