@class CBCEModule, NSString, NSMutableDictionary, CBColorFilter, NSMutableArray, NSObject;
@protocol OS_dispatch_source, CBBrightnessProxy;

@interface CBColorModuleiOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, CBAODProtocol> {
    NSMutableArray *_relevantServices;
    NSObject<OS_dispatch_source> *_rampTimer;
    NSMutableDictionary *_properties;
    struct { struct ColorEffects *cfx; BOOL blueReductionEnabled; BOOL blueReductionFactor; BOOL nightModeSupported; BOOL fadeInProgress; BOOL enforceSlowRamps; float brightnessBoost; BOOL whitePointEnabled; double enablementTs; BOOL forceSnapping; float currentChromaticitySensitivity; BOOL harmonySupported; BOOL harmonyEnabled; BOOL harmonyActive; BOOL harmonyAvailable; float harmonyStrength; float harmonyFixedStrength; BOOL presetDisableHarmony; } _colorStruct;
    BOOL _fadeInProgress;
    BOOL _endRamp;
    struct { unsigned char firstTimerFire; NSObject<OS_dispatch_source> *logTimer; int periodS; } _reportContext;
    BOOL _displayOn;
    unsigned int _backlightService;
    NSMutableArray *_alsServices;
    NSMutableDictionary *_alsNodes;
    NSMutableArray *_filters;
    NSMutableDictionary *_pendingALSSamples;
    int _NSamples;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _firstALSEventArrived;
    float _firstSampleTimeoutValue;
    BOOL _allALSEventsArrived;
    BOOL _forceColorUpdate;
    BOOL _potentiallyBustedALS;
    BOOL _continueWithFewerALSs;
    BOOL _useCopyEventOnDisplayWake;
    BOOL _sensorOverridden;
    struct { float XYZ[3]; struct { float x; float y; } xy; float CCT1; struct { int orientation; float rawChannels[6]; int nChannels; float brightness; } extra; } _overrideColorSample;
    float _preStrobeDimPeriod;
    BOOL _dropALSColorSamples;
    CBColorFilter *_colorFilter;
    CBCEModule *_ceModule;
    unsigned int _ceModelID;
    float _ceConfidenceThreshold;
    int _registeredColorALSCount;
    BOOL _aggregatedConfigApplied;
    long long _analyticsPeriodicSender;
    BOOL _colorEffectsEnabled;
    BOOL _ammoliteEnabledStatus;
    id<CBBrightnessProxy> _brightnessControl;
    BOOL _enableMitigations;
    NSMutableArray *_modules;
}

@property (readonly) unsigned long long moduleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getPid:(struct __IOHIDServiceClient { } *)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)carryLogEnabledHandler:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)applyPendingSamples;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)colorRampRoutine:(const struct { float x0; float x1[9]; unsigned int x2; float x3; struct { float x0; float x1; } x4; int x5; double x6; } *)a0;
- (BOOL)handleAODStateUpdate:(unsigned long long)a0 transitionTime:(float)a1 context:(id)a2;
- (BOOL)CAFadesEnabledHandler:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyIdentifiers;
- (void)setPreferences:(id)a0 forKey:(id)a1;
- (void)updateActivity;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)applyAggregatedConfigPropertyHandler:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)armFirstALSSampleTimer;
- (id)initWithBacklight:(unsigned int)a0 andModuleType:(unsigned long long)a1 andBrightnessControl:(id)a2;
- (void)handleDisplayBrightnessFactorZero:(id)a0;
- (BOOL)carryLogCommitHandler:(id)a0;
- (BOOL)ttRestrictionReload;
- (void)activateColorAdaptation;
- (BOOL)ignoreALSEventsInAOD;
- (BOOL)BLRCCTRangePropertyHandler:(id)a0;
- (void)handleALSEvent:(id)a0;
- (void)handleHIDEventInternal:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)displayPresetHarmonyHandler:(id)a0;
- (id)newAdaptationModeMappingArray:(float *)a0 strengthNum:(int)a1;
- (void)reportResetTimerWithStop:(BOOL)a0;
- (BOOL)CAFixedStrengthPropertyHandler:(id)a0;
- (void)commitPowerLogReport:(struct ColorReport { struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x0; struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x1; struct { double x0[46]; int x1; unsigned long long x2; } x2; struct BlueReductionReport { double x0; double x1; double x2; BOOL x3; float x4; } x3; struct { double x0[10]; int x1; double x2; } x4; struct { double x0; double x1; double x2; double x3; float x4; float x5; } x5; int x6; } *)a0;
- (void)filterInitialize;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (int)getVid:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)preStrobePropertyHandler:(id)a0;
- (void)initColorStruct;
- (BOOL)ttRestrictionHandler:(id)a0;
- (BOOL)BLRCCTTargetPropertyHandler:(id)a0;
- (void)timerRoutine:(id)a0;
- (BOOL)CAModeMappingHandler:(id)a0;
- (void)reportCommitWithStop:(BOOL)a0;
- (void)enableMitigations:(BOOL)a0;
- (void)BLRFactorUpdate:(float)a0;
- (BOOL)preStrobeDimPeriodPropertyHandler:(id)a0;
- (id)copyALSSamples;
- (BOOL)convertNSData:(id)a0 toUint32:(unsigned int *)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (BOOL)CAAABSensorOverridePropertyHandler:(id)a0;
- (void)setNightShiftFactorDictionary:(id)a0;
- (BOOL)CEEnablePropertyHandler:(id)a0 key:(id)a1;
- (id)copyLocalAggregatedConfig;
- (void)displayBrightnessFactorUpdate:(float)a0;
- (id)newAggregatedConfigFromSerializedConfig:(id)a0;
- (BOOL)CAWeakestColorAdaptationModePropertyHandler:(id)a0;
- (BOOL)parseAdaptationModeMappingDictionary:(id)a0 strengths:(float *)a1 strengthNum:(int)a2;
- (BOOL)CAEnabledPropertyHandler:(id)a0;
- (BOOL)CALabShiftPropertyHandler:(id)a0;
- (void)dealloc;
- (void)debugPrintColorSampleAsRGB:(id)a0;
- (void)BLRFactorUpdate:(float)a0 withPeriod:(float)a1 shouldForceUpdate:(BOOL)a2;
- (BOOL)parseAdaptationModeMappingArray:(id)a0 strengths:(float *)a1 strengthNum:(int)a2;
- (BOOL)CAStrengthPropertyHandler:(id)a0;
- (void)processColorSample:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateAvailability;
- (void)CAStrengthUpdate:(float)a0 withPeriod:(float)a1;
- (void)reportInitialize;
- (id)newArrayFromIntegers:(int *)a0 size:(int)a1;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)firstALSSampleTimeout;
- (void)cancelFirstSampleTimeout;
- (void)applyAggregatedConfig:(BOOL)a0;
- (id)initWithBacklight:(unsigned int)a0 andModuleType:(unsigned long long)a1;
- (BOOL)carryLogCommentHandler:(id)a0;
- (id)newAdaptationModeMappingDictionary:(float *)a0 strengthNum:(int)a1;
- (void)stop;
- (BOOL)startNewTimerWithFreq:(float)a0;
- (BOOL)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)a0;
- (id)init;
- (BOOL)serializedAggregatedConfigPropertyHandler:(id)a0;
- (void)inputAmbientColorSample:(struct { float x0[3]; struct { float x0; float x1; } x1; float x2; struct { int x0; float x1[6]; int x2; float x3; } x3; } *)a0 force:(BOOL)a1 trust:(BOOL)a2;
- (id)newArrayFromDoubles:(double *)a0 size:(int)a1;
- (BOOL)start;
- (BOOL)BLRFactorPropertyHandler:(id)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)CoreBrightnessFeaturesDisabledPropertyHandler:(id)a0;
- (id)copyPreferencesForKey:(id)a0;
- (void)reportToCoreAnlytics:(struct ColorReport { struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x0; struct { double x0[17]; int x1[17]; int x2; unsigned long long x3; } x1; struct { double x0[46]; int x1; unsigned long long x2; } x2; struct BlueReductionReport { double x0; double x1; double x2; BOOL x3; float x4; } x3; struct { double x0[10]; int x1; double x2; } x4; struct { double x0; double x1; double x2; double x3; float x4; float x5; } x5; int x6; } *)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (void)handleFilterNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)CEOverridePropertyHandler:(id)a0 key:(id)a1;
- (BOOL)CAStrengthRampPeriodTweakPropertyHandler:(id)a0;
- (BOOL)colorFilterModeHandler:(id)a0;
- (BOOL)ammolitePropertyHandler:(id)a0 key:(id)a1;
- (BOOL)colorRampPeriodOverrideHandler:(id)a0;
- (void)loadBacklightProperties;
- (BOOL)applySamples:(id)a0 withinTimeout:(float)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)getRegistryIDForHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

@end
