@class VUIAccessViewController;

@interface VUIVPPAManager : NSObject

@property (retain, nonatomic) VUIAccessViewController *accessViewController;
@property (nonatomic) BOOL alreadyInProgress;

+ (id)sharedInstance;
+ (BOOL)channelAlreadyExists:(id)a0 channelID:(id)a1;
+ (id)_getConsentedChannels;
+ (id)_getDeniedChannels;
+ (BOOL)_isReminderDue:(id)a0 reminderInterval:(double)a1;
+ (id)addUniqueChannels:(id)a0 channels:(id)a1;

- (id)_rootViewController;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchConfigurationAndPresentVPPAIfRequired:(id)a0 completion:(id /* block */)a1;
- (id)_getEligibleBulkChannels;
- (id)_getVPPABulkChannels:(long long)a0;
- (BOOL)_isChannelVPPAPromptEligible:(id)a0;
- (BOOL)_isVPPAPromptDueForConfig:(id)a0;
- (void)_presentVPPAConsentScreen:(id)a0 vppaState:(long long)a1 completion:(id /* block */)a2;
- (void)reloadConfigurationAfterVPPAChange;
- (void)startVPPAConsentFlow:(id)a0 completion:(id /* block */)a1;
- (void)startVPPAConsentFlowForDeeplink:(id)a0 completion:(id /* block */)a1;

@end
