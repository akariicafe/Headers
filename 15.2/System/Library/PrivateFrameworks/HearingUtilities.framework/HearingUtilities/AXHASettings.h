@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSObject, ACAccountStore;
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
@property (nonatomic) BOOL clearPartialPairing;
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
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;
@property (nonatomic) BOOL anyGizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelNPEnabled;

+ (id)sharedInstance;
+ (void)initialize;

- (void)iCloudAccountDidChange:(id)a0;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (void)_synchronizeIfNecessary:(id)a0;
- (id)deviceIDForPairingInformation:(id)a0;
- (void)pushLocalHearingAidsToiCloud;
- (BOOL)shouldUseiCloud;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (BOOL)isPairedWithRealHearingAids;
- (id)_preferenceKeyForSelector:(SEL)a0;
- (id)_notificationForPreferenceKey:(id)a0;
- (void)_initializeICloudSetup;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)updateStreamingPreference;
- (void)_handlePreferenceChanged:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)_valueForPreferenceKey:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (struct __CFString { } *)domainNameForPreferenceKey:(id)a0;
- (void)_registerForNotification:(id)a0;
- (void)_updateTripleClickOptionsForPairedAids:(id)a0;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (BOOL)isiCloudPaired;

@end
