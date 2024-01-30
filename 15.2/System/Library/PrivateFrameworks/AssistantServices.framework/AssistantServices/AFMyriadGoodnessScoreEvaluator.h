@class NSString, AFSettingsConnection, AFInstanceContext, NSObject, AFPreferences;
@protocol OS_dispatch_queue;

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    AFInstanceContext *_deviceInstanceContext;
    unsigned long long _platformBiasAcquisitionState;
    AFPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
}

@property (readonly, nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preheat;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2;
- (void)_fetchDevicePlatformBiasIfRequired;
- (void)_updatePlatformBias:(unsigned char)a0;
- (unsigned char)getRecentBump:(double)a0 ignoreAdjustedBoost:(BOOL)a1;
- (unsigned char)getPlatformBias;
- (unsigned char)bumpGoodnessScore:(id)a0 lastActivationTime:(double)a1 mediaPlaybackInterruptedTime:(double)a2 ignoreAdjustedBoost:(BOOL)a3;
- (id)initWithDeviceInstanceContext:(id)a0 queue:(id)a1;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)a0;
- (void).cxx_destruct;
- (void)_settingsConnectionDidDisconnect;

@end
