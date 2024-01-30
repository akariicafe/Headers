@class NSString, FCAsyncSerialQueue, NSURL, FCFileCoordinatedNotificationDropbox, FCEndpointConnection;
@protocol FCBundleSubscriptionManagerType, FCCoreConfigurationManager;

@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving>

@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)_sendNotificationsSubscriptionRequest:(id)a0 pathComponent:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;
- (id)_marketingSubscriptionRequestWithType:(int)a0 action:(int)a1 dsid:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfigurationManager:(id)a0 bundleSubscriptionManager:(id)a1;
- (id)initWithBaseURLString:(id)a0;
- (void)refreshNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1 userID:(id)a2 deviceToken:(id)a3 storefrontID:(id)a4 callbackQueue:(id)a5 completion:(id /* block */)a6;
- (void)modifyMarketingSubscriptionWithType:(int)a0 action:(int)a1 dsid:(id)a2 callbackQueue:(id)a3 completion:(id /* block */)a4;
- (void)unsubscribeNotificationsForChannelIDs:(id)a0 userID:(id)a1 deviceToken:(id)a2 storefrontID:(id)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (id)_notificationEntitiesWithChannelIDs:(id)a0 isPaid:(BOOL)a1 paidBundleSubscriptionStatus:(unsigned long long)a2 editorialChannelID:(id)a3;
- (id)_notificationDataInDropbox;
- (void)subscribeNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1 userID:(id)a2 deviceToken:(id)a3 storefrontID:(id)a4 callbackQueue:(id)a5 completion:(id /* block */)a6;
- (void)updateBaseURL:(id)a0;
- (id)_deviceInfoWithDeviceToken:(id)a0;
- (id)_notificationEntitiyWithChannelIDs:(id)a0 isPaid:(BOOL)a1 paidBundleSubscriptionStatus:(unsigned long long)a2 notificationType:(int)a3;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)a0 notificationUserID:(id)a1 deviceToken:(id)a2 storefrontID:(id)a3;
- (void)registerDeviceWithUserID:(id)a0 deviceToken:(id)a1 storefrontID:(id)a2 callbackQueue:(id)a3 completion:(id /* block */)a4;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)a0 paidChannelIDs:(id)a1 userID:(id)a2 deviceToken:(id)a3 storefrontID:(id)a4;
- (int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)a0;
- (void)unregisterDeviceWithUserID:(id)a0 deviceToken:(id)a1 storefrontID:(id)a2 callbackQueue:(id)a3 completion:(id /* block */)a4;
- (id)initWithEndpointConnection:(id)a0 configurationManager:(id)a1 bundleSubscriptionManager:(id)a2;

@end
