@class HMDHomeManager, NSArray, NSString, IDSFirewall, HMDIDSFirewallManager, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMDIDSFirewallManagerContext : HMFObject <HMFLogging>

@property (weak) HMDIDSFirewallManager *firewallManager;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) IDSFirewall *firewall;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSArray *userIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (void)addFirewallEntries:(id)a0;
- (void)handleHomeAddedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handleHomeUserAddedNotification:(id)a0;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0 IDSFirewall:(id)a1 notificationCenter:(id)a2 workQueue:(id)a3;
- (void)registerForHomeUserNotifications;
- (void)replaceFireWallEntries:(id)a0;

@end
