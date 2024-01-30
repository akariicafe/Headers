@interface GKSConnectivitySettings : NSObject

+ (int)getNewSessionJoiningInterval;
+ (double)getLongTermValueWeightB;
+ (id)getAllSettings;
+ (BOOL)supportsEVSCodec;
+ (double)getShortTermValueWeightC;
+ (int)getNATTypeFromCarrierBundle;
+ (double)getShortTermValueWeightB;
+ (id)getClientOption:(id)a0;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (unsigned char)getAbTestingState;
+ (double)getRemoteMediaStallTimeout;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (int)getDecryptionMKMRecoveryInterval;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (int)getDecryptionTimeoutInterval;
+ (int)getShortTermHistoryLength;
+ (double)getAdjustmentFactorA;
+ (int)getRateControllerType;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (double)getAdaptiveLearningA;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (BOOL)supportsHEVCEncoding;
+ (double)getAdjustmentFactorC;
+ (id)getAddressForService:(id)a0;
+ (double)getShortTermValueWeightA;
+ (void)setServerAddresses:(id)a0;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (double)getAdjustmentFactorB;
+ (double)getLongTermValueWeightC;
+ (BOOL)supportsRedAudio;
+ (double)getAdaptiveLearningB;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (int)getLongTermHistoryLength;
+ (double)getLongTermValueWeightA;
+ (int)getAdaptiveLearningState;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (BOOL)getFeatureFlagForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (BOOL)supportiRATRecommendation;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (void)setClientOptions:(id)a0;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;

- (void)dealloc;
- (id)init;

@end
