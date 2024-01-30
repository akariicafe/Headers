@class VUIAccessViewController;

@interface VUIVPPAManager : NSObject

@property (retain, nonatomic) VUIAccessViewController *accessViewController;

+ (id)sharedInstance;
+ (BOOL)_isReminderDue:(id)a0 reminderInterval:(double)a1;
+ (id)addUniqueChannels:(id)a0 channels:(id)a1;
+ (id)_getConsentedChannels;
+ (id)_getDeniedChannels;
+ (BOOL)channelAlreadyExists:(id)a0 channelID:(id)a1;

- (id)_rootViewController;
- (void).cxx_destruct;
- (void)startVPPAConsentFlowForDeeplink:(id)a0 completion:(id /* block */)a1;
- (void)startVPPAConsentFlow:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isChannelVPPAPromptEligible:(id)a0;
- (void)_fetchConfigurationAndPresentVPPAIfRequired:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isVPPAPromptDueForConfig:(id)a0;
- (void)_presentVPPAConsentScreen:(id)a0 vppaState:(long long)a1 completion:(id /* block */)a2;
- (id)_getVPPABulkChannels:(long long)a0;
- (id)_getEligibleBulkChannels;

@end
