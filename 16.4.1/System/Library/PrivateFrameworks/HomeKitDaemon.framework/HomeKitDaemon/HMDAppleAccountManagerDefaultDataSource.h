@class NSNotificationCenter, NSString, NSObject;
@protocol OS_dispatch_queue, HMDAPSConnection, HMDACAccountStore;

@interface HMDAppleAccountManagerDefaultDataSource : NSObject <HMDAppleAccountManagerDataSource>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDAPSConnection> apsConnection;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDACAccountStore> accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
