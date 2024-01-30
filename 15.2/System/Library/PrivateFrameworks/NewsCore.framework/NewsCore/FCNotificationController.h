@class NSString, FCCommandQueue, FCUserInfo;
@protocol FCCoreConfigurationManager;

@interface FCNotificationController : NSObject <FCUserInfoObserving>

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (retain, nonatomic) FCCommandQueue *commandQueue;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *deviceToken;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic) BOOL publisherNotificationsAllowed;
@property (nonatomic) BOOL appleNewsNotificationsAllowed;
@property (nonatomic) BOOL shouldUseNewsUINotificationHandling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNewIssueNotificationsEnabled:(BOOL)a0;
- (BOOL)unregisterNotificationsForTagID:(id)a0;
- (void)refreshNotificationsFromAppleNews;
- (void)registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (void)userInfoDidChangeNotificationsUserID:(id)a0;
- (BOOL)setMarketingNotificationsEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)registerNotificationsForTagID:(id)a0 isPaid:(BOOL)a1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUserInfo:(id)a0 commandQueue:(id)a1 configurationManager:(id)a2 publisherNotificationsAllowed:(BOOL)a3 appleNewsNotificationsAllowed:(BOOL)a4;
- (BOOL)refreshNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1;
- (void)dealloc;
- (void)_registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (void)deviceDigestModeDidUpdateToDigestMode:(int)a0;
- (void)setEndOfAudioTrackNotificationsEnabled:(BOOL)a0;

@end
