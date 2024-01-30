@class NSUserDefaults, NSMutableDictionary;

@interface HAENDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _EUVolumeLimitFlag;
    BOOL _SKVolumeLimitFlag;
}

+ (id)sharedInstance;
+ (BOOL)isRunningCITests;
+ (BOOL)HAENSupportedForCurrentDeviceClass;
+ (BOOL)isCurrentProcessMediaserverd;

- (long long)getAudioAccessoryConnectionInfo;
- (void)removeAllAdapters;
- (void)forceReadDefaults;
- (BOOL)isReduceLoudSoundEnabled;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (BOOL)isHAENFeatureMandatory;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (BOOL)softwareVersionEnabled;
- (void)updateRLSSettings;
- (BOOL)isHAENFeatureOptedIn;
- (double)getLiveMonitoringThreshold;
- (void)updateUserVolumeForVolumeLimit;
- (BOOL)isSKVolumeLimitOn;
- (BOOL)isHAENFeatureEnabled;
- (BOOL)_shouldRepromptSinceDate:(id)a0;
- (void)setUserVolumeWithValue:(float)a0 mininum:(float)a1;
- (double)getLiveMonitorTimeWindowInSeconds;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (id)init;
- (BOOL)isEUVolumeLimitOn;
- (void)_registerNotification:(id)a0;
- (double)volumeReductionDelta;
- (void)_updateSetting:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (BOOL)isCurrentAudioAccessoryHeadphone;
- (void).cxx_destruct;
- (id)_generateAccessoryKeyWithManufacture:(id)a0 andSerialNumber:(id)a1;
- (int)getReduceLoudSoundThreshold;
- (void)wiredDeviceStatusDidChange;

@end
