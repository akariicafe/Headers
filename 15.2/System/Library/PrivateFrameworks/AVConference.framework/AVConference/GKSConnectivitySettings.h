@interface GKSConnectivitySettings : NSObject

+ (BOOL)supportiRATRecommendation;
+ (double)getAdaptiveLearningB;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (int)getDecryptionMKMRecoveryInterval;
+ (BOOL)supportsHEVCEncoding;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (double)getShortTermValueWeightA;
+ (void)setServerAddresses:(id)a0;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (id)getAllSettings;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (int)getAdaptiveLearningState;
+ (double)getLongTermValueWeightA;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (id)getAddressForService:(id)a0;
+ (BOOL)supportsEVSCodec;
+ (double)getLongTermValueWeightB;
+ (BOOL)supportsRedAudio;
+ (id)getClientOption:(id)a0;
+ (int)getLongTermHistoryLength;
+ (void)setClientOptions:(id)a0;
+ (int)getNATTypeFromCarrierBundle;
+ (double)getShortTermValueWeightB;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (double)getAdjustmentFactorA;
+ (double)getAdaptiveLearningA;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (int)getRateControllerType;
+ (int)getNewSessionJoiningInterval;
+ (double)getAdjustmentFactorB;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (int)getDecryptionTimeoutInterval;
+ (double)getLongTermValueWeightC;
+ (unsigned char)getAbTestingState;
+ (BOOL)getFeatureFlagForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (double)getShortTermValueWeightC;
+ (int)getShortTermHistoryLength;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (double)getRemoteMediaStallTimeout;
+ (double)getAdjustmentFactorC;

- (id)init;
- (void)dealloc;

@end
