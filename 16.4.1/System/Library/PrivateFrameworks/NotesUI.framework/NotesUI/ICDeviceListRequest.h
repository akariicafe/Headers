@class NSArray, NSString, ACAccount, NSObject;
@protocol OS_dispatch_semaphore;

@interface ICDeviceListRequest : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain) NSArray *devices;
@property (retain) NSObject<OS_dispatch_semaphore> *workSemaphore;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelDisplayName;
@property (copy, nonatomic) NSString *softwareVersion;
@property BOOL didGetICloudDeviceList;

+ (id)combineICloudDevices:(id)a0 withCloudKitDevices:(id)a1;
+ (id)filteredDevices:(id)a0;
+ (id)setOfDeviceNamesFromDevices:(id)a0;

- (id)initWithAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)anyDeviceNeedsUpgrade;
- (BOOL)anyDeviceNotUpgradable;
- (BOOL)anyOSXDeviceNotUpgraded;
- (void)fetchCloudKitDevicesWithCompletionBlock:(id /* block */)a0;
- (void)fetchICloudDevicesWithCompletionBlock:(id /* block */)a0;
- (void)fetchWithCompletionBlock:(id /* block */)a0;
- (BOOL)waitForFetchWithTimeout:(double)a0;

@end
