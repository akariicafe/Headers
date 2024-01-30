@class HMDHomeManager, HMDCloudManager, NSObject, HMDAccessoryBrowser;
@protocol OS_dispatch_queue;

@interface HMDMainDriver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) HMDCloudManager *cloudDataSyncManager;

+ (id)driver;

- (void)localeChanged;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)executeBTAJob:(const char *)a0 withXPCDict:(id)a1;
- (void)logError:(id)a0 component:(id)a1;
- (void)initBackgroundTaskAgent;

@end
