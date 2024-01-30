@class NTKArgonManager, NSString, NSMutableDictionary, APSConnection, UNUserNotificationCenter, NTKFaceSupportNotificationActionEventRecorder, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface NTKDArgonService : NSObject <NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer>

@property (readonly, nonatomic) NTKArgonManager *manager;
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pushQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *userNotificationQueue;
@property (retain, nonatomic) NSMutableDictionary *keyDescriptorsAwaitingUserNotifications;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) int pushToken;
@property (readonly, nonatomic) NTKFaceSupportNotificationActionEventRecorder *actionRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)queryForNewFaces:(id /* block */)a0;
- (void)ingestKeyDescriptor:(id)a0 withMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)requestResetOnNextLaunch:(id /* block */)a0;
- (void)knownKeyDescriptors:(id /* block */)a0;
- (void)displayUserNotificationForKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)requestCurrentEnvironment:(id /* block */)a0;
- (void)setCurrentEnvironment:(long long)a0 completion:(id /* block */)a1;
- (void)_addFaceActionTappedFromNotification:(id)a0;
- (void)_viewFaceActionTappedFromNotification:(id)a0;
- (void)_viewWhatsNewActionTappedFromNotification:(id)a0;
- (void)_setupUserNotificationCenter;
- (void)_checkInForFirstQueryActivity;
- (void)_checkInForDailyQueryActivity;
- (void)push_postNotificationForKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_push_userNotification_faceBundleManagerDidUpdate:(id)a0;
- (void)push_updatePushConnection;
- (BOOL)_argonIsComplete;
- (id)_criteriaForFirstQueryActivity;
- (void)_handleFirstQuery;
- (id)_criteriaForDailyRefreshActiviy;
- (BOOL)_handleDailyQuery;
- (id)_baseCriteriaForArgonActivities;
- (void)_recordEventOfNotification:(id)a0 action:(long long)a1;
- (void)_queue_push_userNotification_processWaitingNotifications;
- (void)_push_sendNotificationForContent:(id)a0 requestIdentifier:(id)a1 toNotificationCenter:(id)a2 identifier:(id)a3 bundle:(id)a4 completion:(id /* block */)a5;
- (void)push_deviceChanged:(id)a0;
- (void)argonManager:(id)a0 didExtractKeyDescriptor:(id)a1 toPath:(id)a2;
- (void)argonManager:(id)a0 failedToExtractKeyDescriptor:(id)a1 error:(id)a2;
- (void)argonManager:(id)a0 didRemoveExtractedArgonFolderAtPath:(id)a1;
- (void)argonManagerDidRefresh:(id)a0;

@end
