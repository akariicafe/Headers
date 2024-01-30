@class CNUIUserActionTargetDiscoveryCache, NSString;
@protocol CNSchedulerProvider, CNLSApplicationWorkspace, CNTUCallProviderManager, CNCapabilities, CNMCProfileConnection;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>

@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNTUCallProviderManager> callProviderManager;
@property (readonly, nonatomic) id<CNMCProfileConnection> profileConnection;
@property (readonly, nonatomic) id<CNCapabilities> capabilities;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider;
@property (readonly, nonatomic) CNUIUserActionTargetDiscoveryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (BOOL)isSkypeAvailableWithEnvironment:(id)a0;
+ (id)applicationProxiesForIntent:(id)a0 applicationWorkspace:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)thirdPartyTargetsForActionTypes:(id)a0;
- (id)targetForTextWithMessages;
- (id)initWithApplicationWorkspace:(id)a0 callProviderManager:(id)a1 profileConnection:(id)a2 schedulerProvider:(id)a3 highLatencySchedulerProvider:(id)a4 capabilities:(id)a5;
- (id)observableForTargetsChangedForActionType:(id)a0 schedulerProvider:(id)a1;
- (id)targetsForActionType:(id)a0;
- (id)thirdPartyTargetsForBundleIdentifier:(id)a0;
- (id)_targetsForActionType:(id)a0;
- (void)resetTargetsForActionType:(id)a0;
- (id)targetsForText;
- (id)targetsForVoice;
- (id)targetsForVideo;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForDirections;
- (id)targetForVoiceWithTelephony;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetForTextWithSkype;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;

@end
