@class AMSBag, VSSetTopBoxProfile, MTMetricsKit, VSIdentityProvider, NSString, VSPreferences, VSRemoteNotifier, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface VSMetricsCenter : NSObject <MTBaseEventDataProviderDelegate, VSRemoteNotifierDelegate, MCProfileConnectionObserver>

@property (retain, nonatomic) MTMetricsKit *mainMetricsKit;
@property (retain, nonatomic) AMSBag *bag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic) BOOL optedIn;
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) BOOL currentIdentityProviderSupportsSTB;
@property (nonatomic) BOOL currentIdentityProviderIsFullySupported;
@property (nonatomic) BOOL fetchedSetTopBoxProfile;
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMetricsCenter;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (id)userID;
- (id)dsId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accountStoreDidChange;
- (void)fetchSetTopBoxProfile;
- (id)mutableBaseFieldsWithUserID:(BOOL)a0;
- (id)flexibleBaseFields;
- (BOOL)hasSetTopBoxProfile;
- (BOOL)currentProviderIsSetTopBoxProvider;
- (id)capacityData:(id)a0;
- (id)capacityDataAvailable:(id)a0;
- (id)capacityDisk:(id)a0;
- (id)capacitySystem:(id)a0;
- (id)capacitySystemAvailable:(id)a0;
- (id)clientId:(id)a0;
- (id)connection:(id)a0;
- (id)hardwareModel:(id)a0;
- (id)isSignedIn:(id)a0;
- (id)pageUrl:(id)a0;
- (id)pixelRatio:(id)a0;
- (id)resourceRevNum:(id)a0;
- (id)screenHeight:(id)a0;
- (id)screenWidth:(id)a0;
- (id)userType:(id)a0;
- (id)windowInnerHeight:(id)a0;
- (id)windowInnerWidth:(id)a0;
- (id)windowOuterHeight:(id)a0;
- (id)windowOuterWidth:(id)a0;
- (id)xpPostFrequency:(id)a0;
- (id)xpSendMethod:(id)a0;
- (void)recordSignInEventWithProviderIdentifier:(id)a0 supportedProvider:(BOOL)a1 channelAdamID:(id)a2 error:(id)a3;
- (void)recordSignOutEventWithProviderIdentifier:(id)a0;
- (void)recordMetadataRequestWithProviderIdentifier:(id)a0 channelAdamID:(id)a1 error:(id)a2;
- (void)recordSTBOptOutEventWithError:(id)a0;
- (void)recordEnterEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordExitEventWithPage:(id)a0 pageType:(id)a1;
- (void)recordClickEventWithPage:(id)a0 pageType:(id)a1 target:(id)a2;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)a0;

@end
