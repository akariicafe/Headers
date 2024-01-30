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

- (void)setEndOfAudioTrackNotificationsEnabled:(BOOL)a0;
- (void)setNewIssueNotificationsEnabled:(BOOL)a0;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)a0;
- (void)deviceDigestModeDidUpdateToDigestMode:(int)a0;
- (void)dealloc;
- (void)refreshNotificationsFromAppleNews;
- (void)userInfoDidChangeNotificationsUserID:(id)a0;
- (BOOL)unregisterNotificationsForTagID:(id)a0;
- (id)init;
- (id)initWithUserInfo:(id)a0 commandQueue:(id)a1 configurationManager:(id)a2 publisherNotificationsAllowed:(BOOL)a3 appleNewsNotificationsAllowed:(BOOL)a4;
- (void)_registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (BOOL)refreshNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1;
- (BOOL)registerNotificationsForTagID:(id)a0 isPaid:(BOOL)a1;
- (void)registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (void).cxx_destruct;
- (BOOL)setMarketingNotificationsEnabled:(BOOL)a0 error:(id *)a1;

@end
