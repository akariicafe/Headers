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
+ (id)applicationProxiesForIntent:(id)a0 applicationWorkspace:(id)a1;
+ (BOOL)isSkypeAvailableWithEnvironment:(id)a0;
+ (BOOL)shouldIgnoreApplicationProxy:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)targetForTextWithMessages;
- (id)thirdPartyTargetsForActionTypes:(id)a0;
- (id)targetsForVideo;
- (id)initWithApplicationWorkspace:(id)a0 callProviderManager:(id)a1 profileConnection:(id)a2 schedulerProvider:(id)a3 highLatencySchedulerProvider:(id)a4 capabilities:(id)a5;
- (id)targetsForEmail;
- (id)targetsForVoice;
- (id)_targetsForActionType:(id)a0;
- (id)observableForTargetsChangedForActionType:(id)a0 schedulerProvider:(id)a1;
- (void)resetTargetsForActionType:(id)a0;
- (id)targetForTextWithSkype;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVoiceWithTelephony;
- (id)targetsForActionType:(id)a0;
- (id)targetsForDirections;
- (id)targetsForPay;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForText;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)thirdPartyTargetsForBundleIdentifier:(id)a0;

@end
