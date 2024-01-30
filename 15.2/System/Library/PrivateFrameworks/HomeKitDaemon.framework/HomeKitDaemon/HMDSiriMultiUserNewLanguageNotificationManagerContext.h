@class HMDUser, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate;

@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject <HMFLogging>

@property (weak) id<HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> delegate;
@property BOOL cachedHasCurrentUserSeenNotification;
@property (readonly, weak) HMDUser *user;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) BOOL hasCurrentUserSeenNotification;
@property (readonly, getter=isRMVEnabledForCurrentUser) BOOL RMVEnabledForCurrentUser;
@property (readonly) NSString *currentDeviceSiriLanguage;
@property (readonly) NSArray *mediaAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 workQueue:(id)a1;
- (void)handleMediaAccessorySoftwareVersionUpdated:(id)a0;
- (void)setCurrentUserHasSeenNotification;
- (id)siriLanguagesRequiringNotificationForVersion:(id)a0;
- (id)siriLanguageForMediaAccessory:(id)a0;
- (void)showNotificationForNewlySupportedLanguage:(id)a0;
- (void)submitLogEventForShownNotificationWithLanguage:(id)a0;

@end
