@class HMFTimer, NSMutableDictionary, NSDictionary, NSString;

@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMIPreference *sharedInstance;
@property (class, readonly) NSDictionary *qosMap;
@property (class, readonly) BOOL isProductTypeJ42;
@property (class, readonly) BOOL isProductTypeJ105;
@property (class, readonly) BOOL isProductTypeJ305;
@property (class, readonly) BOOL isProductTypeJ255;
@property (class, readonly) BOOL isProductTypeB238;
@property (class, readonly) BOOL isProductTypeB520;
@property (class, readonly) BOOL isProductTypeB620;
@property (class, readonly) BOOL isAudioAccessory;
@property (class, readonly) BOOL isInternalInstall;
@property (class) BOOL pretendProductTypeIsUnknown;

@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (readonly, nonatomic) NSMutableDictionary *preferenceCache;
@property (readonly, nonatomic) NSMutableDictionary *preferenceLoggedValues;
@property (readonly, nonatomic) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) BOOL usesCPUOnly;
@property (readonly) BOOL shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) BOOL shouldEnableTorsoRecognition;
@property (readonly) double maxAnalysisFPSForCurrentThermalLevel;
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
- (id)init;
- (void).cxx_destruct;
- (void)addPreferenceOverrideFromDictionary:(id)a0;
- (BOOL)boolPreferenceForKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)hasPreferenceForKey:(id)a0;
- (void)logPreferenceForKey:(id)a0 value:(id)a1;
- (double)maxAnalysisFPSForCurrentPeakPowerPressureLevel;
- (double)maxAnalysisFPSForSystemResourceUsageLevel:(long long)a0;
- (unsigned long long)maxConcurrentAnalyzersForCurrentPeakPowerPressureLevel;
- (unsigned long long)maxConcurrentAnalyzersForCurrentThermalLevel;
- (unsigned long long)maxConcurrentAnalyzersForSystemResourceUsageLevel:(long long)a0;
- (id)numberPreferenceForKey:(id)a0;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;
- (void)removeAllPreferenceOverrides;
- (void)setPreferenceOverrideFromDictionary:(id)a0;
- (BOOL)shouldGenerateThumbnailForAnalysisFPS:(double)a0;
- (id)stringPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (id)systemPreferenceValueForKey:(id)a0;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;

@end
