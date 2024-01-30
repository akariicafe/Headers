@class NSUserDefaults, NSMutableDictionary;

@interface HAENDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _EUVolumeLimitFlag;
    BOOL _SKVolumeLimitFlag;
}

+ (id)sharedInstance;
+ (BOOL)isCurrentProcessMediaserverd;

- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (id)init;
- (double)volumeReductionDelta;
- (double)getLiveMonitorTimeWindowInSeconds;
- (void).cxx_destruct;
- (BOOL)isHAENFeatureOptedIn;
- (BOOL)isReduceLoudSoundEnabled;
- (BOOL)_shouldRepromptSinceDate:(id)a0;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (int)getReduceLoudSoundThreshold;
- (BOOL)isSKVolumeLimitOn;
- (void)wiredDeviceStatusDidChange;
- (BOOL)isHAENFeatureMandatory;
- (void)_registerNotification:(id)a0;
- (double)getLiveMonitoringThreshold;
- (void)updateRLSSettings;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (void)forceReadDefaults;
- (void)removeAllAdapters;
- (long long)getAudioAccessoryConnectionInfo;
- (id)_generateAccessoryKeyWithManufacture:(id)a0 andSerialNumber:(id)a1;
- (BOOL)softwareVersionEnabled;
- (BOOL)isHAENFeatureEnabled;
- (void)updateUserVolumeForVolumeLimit;
- (void)setUserVolumeWithValue:(float)a0 mininum:(float)a1;
- (void)_updateSetting:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (BOOL)isEUVolumeLimitOn;

@end
