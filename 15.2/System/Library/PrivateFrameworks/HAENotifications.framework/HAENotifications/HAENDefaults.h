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
+ (BOOL)isCurrentProcessMediaserverd;
+ (BOOL)HAENSupportedForCurrentDeviceClass;

- (BOOL)softwareVersionEnabled;
- (double)getLiveMonitoringThreshold;
- (BOOL)_shouldRepromptSinceDate:(id)a0;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (void)_updateSetting:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (int)getReduceLoudSoundThreshold;
- (void)_registerNotification:(id)a0;
- (double)getLiveMonitorTimeWindowInSeconds;
- (void)updateUserVolumeForVolumeLimit;
- (void)updateRLSSettings;
- (BOOL)isReduceLoudSoundEnabled;
- (long long)getAudioAccessoryConnectionInfo;
- (void)wiredDeviceStatusDidChange;
- (void).cxx_destruct;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (id)init;
- (void)forceReadDefaults;
- (id)_generateAccessoryKeyWithManufacture:(id)a0 andSerialNumber:(id)a1;
- (BOOL)isHAENFeatureOptedIn;
- (BOOL)isSKVolumeLimitOn;
- (double)volumeReductionDelta;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (BOOL)isHAENFeatureMandatory;
- (BOOL)isCurrentAudioAccessoryHeadphone;
- (void)removeAllAdapters;
- (void)setUserVolumeWithValue:(float)a0 mininum:(float)a1;
- (BOOL)isHAENFeatureEnabled;
- (BOOL)isEUVolumeLimitOn;

@end
