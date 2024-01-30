@interface GKSConnectivitySettings : NSObject

+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getLongTermHistoryLength;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (int)getNewSessionJoiningInterval;
+ (double)getAdjustmentFactorB;
+ (void)setClientOptions:(id)a0;
+ (id)getClientOption:(id)a0;
+ (double)getShortTermValueWeightA;
+ (id)getAllSettings;
+ (BOOL)supportsEVSCodec;
+ (double)getAdaptiveLearningA;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (double)getRemoteMediaStallTimeout;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (double)getAdjustmentFactorC;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (BOOL)supportiRATRecommendation;
+ (BOOL)supportsHEVCEncoding;
+ (int)getDecryptionTimeoutInterval;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getRateControllerType;
+ (void)setServerAddresses:(id)a0;
+ (int)getShortTermHistoryLength;
+ (unsigned char)getAbTestingState;
+ (double)getLongTermValueWeightB;
+ (double)getLongTermValueWeightC;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (BOOL)supportsRedAudio;
+ (double)getAdaptiveLearningB;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (double)getShortTermValueWeightC;
+ (id)getAddressForService:(id)a0;
+ (double)getAdjustmentFactorA;
+ (double)getLongTermValueWeightA;
+ (int)getAdaptiveLearningState;
+ (double)getShortTermValueWeightB;

- (id)init;
- (void)dealloc;

@end
