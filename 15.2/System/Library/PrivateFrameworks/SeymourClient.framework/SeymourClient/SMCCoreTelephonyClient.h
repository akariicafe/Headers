@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue, SMCCoreTelephonyClientDelegate;

@interface SMCCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate>

@property (nonatomic) BOOL cellularDataEnabled;
@property (readonly, nonatomic) CoreTelephonyClient *ctClient;
@property (readonly, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *preferredDataSubscriptionContext;
@property (nonatomic) BOOL roaming;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SMCCoreTelephonyClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)dataSettingsChanged:(id)a0;
- (void)internetDataStatus:(id)a0;
- (void)activeSubscriptionsDidChange;
- (void).cxx_destruct;
- (void)activate;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)servingNetworkChanged:(id)a0;
- (void)_updatePreferredDataSubscriptionContext;
- (BOOL)_getRoamingFromDataStatus:(id)a0;
- (struct { int x0; int x1; })cellularDataEnabled:(out char *)a0;
- (void)roaming:(out char *)a0 error:(out id *)a1;

@end
