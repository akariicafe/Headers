@class HMFTimer, NSMutableDictionary, NSDictionary, HMFUnfairLock, NSString;

@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging>

@property (class, readonly) HMIPreference *sharedInstance;
@property (class, readonly) NSDictionary *qosMap;
@property (class, readonly) BOOL isProductTypeJ42;
@property (class, readonly) BOOL isProductTypeJ105;
@property (class, readonly) BOOL isProductTypeB238;
@property (class, readonly) BOOL isProductTypeB520;
@property (class, readonly) BOOL isAudioAccessory;
@property (class, readonly) BOOL isInternalInstall;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (readonly, nonatomic) NSMutableDictionary *preferenceCache;
@property (readonly, nonatomic) NSMutableDictionary *preferenceLoggedValues;
@property (readonly, nonatomic) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) BOOL usesCPUOnly;
@property (readonly) long long maxVideoEncoderFrameRate;
@property (readonly) BOOL shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) double maxAnalysisFPS;
@property (readonly) unsigned long long maxVideoEncoders;
@property (readonly) NSDictionary *preferenceOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (BOOL)boolPreferenceForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)maxConcurrentAnalyzersForSystemResourceUsageLevel:(long long)a0;
- (id)stringPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)hasPreferenceForKey:(id)a0;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (void)setPreferenceOverrideFromDictionary:(id)a0;
- (id)systemPreferenceValueForKey:(id)a0;
- (void)logPreferenceForKey:(id)a0 value:(id)a1;
- (void)addPreferenceOverrideFromDictionary:(id)a0;
- (void)removeAllPreferenceOverrides;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;

@end
