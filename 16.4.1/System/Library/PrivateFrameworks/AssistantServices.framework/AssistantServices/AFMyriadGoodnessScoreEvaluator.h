@class NSString, AFSettingsConnection, AFInstanceContext, AFMyriadInstrumentation, NSObject, AFPreferences;
@protocol OS_dispatch_queue;

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    AFInstanceContext *_deviceInstanceContext;
    unsigned long long _platformBiasAcquisitionState;
    AFPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
    AFMyriadInstrumentation *_myriadInstrumentation;
}

@property (readonly, nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preheat;
- (void)_settingsConnectionDidDisconnect;
- (void).cxx_destruct;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:(id)a0 lastActivationTime:(double)a1 mediaPlaybackInterruptedTime:(double)a2 ignoreAdjustedBoost:(BOOL)a3 recentlyWonBySmallAmount:(BOOL)a4;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (unsigned char)_getRecentBump:(double)a0 ignoreAdjustedBoost:(BOOL)a1 recentlyWonBySmallAmount:(BOOL)a2;
- (BOOL)_supportsConfigurableBoost;
- (void)_updateBiasValueWithDefault:(unsigned long long)a0;
- (void)_updatePlatformBias:(unsigned char)a0;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)a0;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2 instrumentation:(id)a3;
- (id)initWithDeviceInstanceContext:(id)a0 queue:(id)a1;

@end
