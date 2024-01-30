@class ACAccountStore, NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) int availableInputEars;
@property (nonatomic) int earsSupportingWatch;
@property (nonatomic) int preferredInputEar;
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL ultronSupportEnabled;
@property (nonatomic) BOOL ultronIsRunning;
@property (nonatomic) int soundDetectionState;
@property (readonly, nonatomic) BOOL soundDetectionEnabled;
@property (retain, nonatomic) NSArray *enabledSoundDetectionTypes;
@property (retain, nonatomic) NSMutableDictionary *soundDetectionSnoozeDictionary;
@property (readonly, nonatomic) NSArray *supportedSoundDetectionTypes;
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)stringForSoundDetectionState:(int)a0;

- (id)_preferenceKeyForSelector:(SEL)a0;
- (void)iCloudAccountDidChange:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (id)_notificationForPreferenceKey:(id)a0;
- (id)_valueForPreferenceKey:(id)a0;
- (void)_registerForNotification:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_handlePreferenceChanged:(id)a0;
- (void)_synchronizeIfNecessary:(id)a0;
- (struct __CFString { } *)domainNameForPreferenceKey:(id)a0;
- (void)_initializeICloudSetup;
- (id)init;
- (BOOL)isDeviceIDOnCloudBlacklist:(id)a0;
- (void).cxx_destruct;
- (void)removeSoundDetectionType:(id)a0;
- (BOOL)shouldUseiCloud;
- (void)dealloc;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (void)removeAllSoundDetectionTypes;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (void)addDeviceIDToCloudBlacklist:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;
- (id)deviceIDForPairingInformation:(id)a0;
- (void)removeDeviceIDFromCloudBlacklist:(id)a0;
- (BOOL)isiCloudPaired;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)_updateTripleClickOptionsForPairedAids:(id)a0;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (void)addSoundDetectionType:(id)a0;
- (void)setSupportedSoundDetectionTypes:(id)a0;
- (BOOL)isPairedWithRealHearingAids;
- (void)addSnoozeDateToSnoozeDictionary:(id)a0 forKey:(id)a1;
- (void)pushLocalHearingAidsToiCloud;

@end
