@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMSAccountSyncNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldProcessChangeForAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2 store:(id)a3;
+ (BOOL)_shouldConsiderAccountActive:(id)a0;

- (void)_synciTunesAccountDeletion:(id)a0 inStore:(id)a1;
- (void)_synciTunesAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2 allowAccountRepair:(BOOL)a3;
- (BOOL)_syncIDMSAccountForiTunesAccount:(id)a0 inStore:(id)a1;
- (BOOL)_sendRemoteDeviceCommand:(id)a0 forAccount:(id)a1 inStore:(id)a2 attachCompanionInfo:(BOOL)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_sendRemoteDeviceCommand:(id)a0 forAccount:(id)a1 inStore:(id)a2 error:(id *)a3;
- (void)_synciTunesAccountAddition:(id)a0 inStore:(id)a1 allowAccountRepair:(BOOL)a2;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
