@class HMFTimer, NSMutableDictionary, NSDictionary, NSString;

@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMIPreference *sharedInstance;
@property (class, readonly) NSDictionary *qosMap;
@property (class, readonly) BOOL isProductTypeJ42;
@property (class, readonly) BOOL isProductTypeJ105;
@property (class, readonly) BOOL isProductTypeJ305;
@property (class, readonly) BOOL isProductTypeB238;
@property (class, readonly) BOOL isProductTypeB520;
@property (class, readonly) BOOL isAudioAccessory;
@property (class, readonly) BOOL isInternalInstall;
@property (class) BOOL pretendProductTypeIsUnknown;

@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (readonly, nonatomic) NSMutableDictionary *preferenceCache;
@property (readonly, nonatomic) NSMutableDictionary *preferenceLoggedValues;
@property (readonly, nonatomic) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) BOOL usesCPUOnly;
@property (readonly) long long maxVideoEncoderFrameRate;
@property (readonly) BOOL shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) BOOL shouldEnableTorsoRecognition;
@property (readonly) double maxAnalysisFPSForCurrentThermalLevel;
@property (readonly) unsigned long long maxVideoEncoders;
@property (readonly) BOOL isIdle;
@property (readonly) unsigned int analysisQOS;
@property (readonly) NSDictionary *preferenceOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)productType;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)boolPreferenceForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (id)stringPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)maxConcurrentAnalyzersForSystemResourceUsageLevel:(long long)a0;
- (double)maxAnalysisFPSForSystemResourceUsageLevel:(long long)a0;
- (id)numberPreferenceForKey:(id)a0;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (unsigned long long)maxConcurrentAnalyzersForCurrentThermalLevel;
- (id)systemPreferenceValueForKey:(id)a0;
- (void)logPreferenceForKey:(id)a0 value:(id)a1;
- (BOOL)shouldGenerateThumbnailForAnalysisFPS:(double)a0;
- (void)addPreferenceOverrideFromDictionary:(id)a0;
- (void)setPreferenceOverrideFromDictionary:(id)a0;
- (void)removeAllPreferenceOverrides;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (BOOL)hasPreferenceForKey:(id)a0;

@end
