@class NSSet, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, PKPushRegistryDelegate;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (retain, nonatomic) NSMutableDictionary *pushTypeToToken;
@property (retain, nonatomic) NSMutableDictionary *pushTypeToConnection;
@property (nonatomic) int voipToken;
@property (nonatomic) int complicationToken;
@property (nonatomic) int fileProviderToken;
@property (nonatomic) int outstandingVoIPPushes;
@property (nonatomic) double lastReportedCallTime;
@property (weak) id<PKPushRegistryDelegate> delegate;
@property (copy) NSSet *desiredPushTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_assertIfCallKitNotLinked;
+ (id)_pushTypeToMachServiceName;

- (void)_registerForPushType:(id)a0;
- (void)complicationPayloadReceived:(id)a0;
- (void)remoteUserNotificationPayloadReceived:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_selfTaskHasEntitlement:(struct __CFString { } *)a0;
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)a0;
- (void)_noteIncomingCallReported;
- (id)pushTokenForType:(id)a0;
- (void)_unregisterForPushType:(id)a0;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)a0;
- (id)_createConnectionForPushType:(id)a0;
- (void)voipRegistrationSucceededWithDeviceToken:(id)a0;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)a0;
- (void)dealloc;
- (void)fileProviderPayloadReceived:(id)a0;
- (void)_terminateAppIfThereAreUnhandledVoIPPushes;
- (void)voipPayloadReceived:(id)a0 mustPostCall:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)fileProviderRegistrationFailed;
- (void)complicationRegistrationFailed;
- (void)voipRegistrationFailed;
- (void).cxx_destruct;
- (void)_renewConnectionForPushTypeIfRegistered:(id)a0;
- (id)initWithQueue:(id)a0;

@end
