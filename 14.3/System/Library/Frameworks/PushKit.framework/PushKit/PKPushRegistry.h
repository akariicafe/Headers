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

+ (void)_checkIfNecessaryVoIPFrameworksAreLinked;
+ (id)_pushTypeToMachServiceName;

- (void)_registerForPushType:(id)a0;
- (void)fileProviderRegistrationFailed;
- (void)voipRegistrationFailed;
- (void)fileProviderPayloadReceived:(id)a0;
- (id)initWithQueue:(id)a0;
- (BOOL)_selfTaskHasEntitlement:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)complicationPayloadReceived:(id)a0;
- (void)voipPayloadReceived:(id)a0 mustPostCall:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_unregisterForPushType:(id)a0;
- (void)remoteUserNotificationPayloadReceived:(id)a0 completionHandler:(id /* block */)a1;
- (void)_noteIncomingCallReported;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)a0;
- (id)_createConnectionForPushType:(id)a0;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)a0;
- (void)_renewConnectionForPushTypeIfRegistered:(id)a0;
- (void)_terminateAppIfThereAreUnhandledVoIPPushes;
- (void)voipRegistrationSucceededWithDeviceToken:(id)a0;
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)a0;
- (void)complicationRegistrationFailed;
- (id)pushTokenForType:(id)a0;
- (void)voipPayloadReceived:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
