@class NSMutableArray;

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying> {
    struct { unsigned char currentMediaAccessoryFallbackMediaUserType : 1; unsigned char enabledResidentsDeviceCapabilities : 1; unsigned char firstHAPAccessoryAddedCohortWeek : 1; unsigned char homeCreationCohortWeek : 1; unsigned char homeCreationMonth : 1; unsigned char homeCreationYear : 1; unsigned char homepodSynchLatency : 1; unsigned char networkProtectionStatus : 1; unsigned char numAccessories : 1; unsigned char numAccessoriesNetworkProtectionAutoFullAccess : 1; unsigned char numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN : 1; unsigned char numAccessoriesNetworkProtectionAutoProtectedMainLAN : 1; unsigned char numAccessoriesNetworkProtectionFullAccess : 1; unsigned char numAccessoriesNetworkProtectionHomeKitOnly : 1; unsigned char numAccessoriesNetworkProtectionUnprotected : 1; unsigned char numAccessoriesWiFiPPSKCredential : 1; unsigned char numAccessoryServiceGroups : 1; unsigned char numAdmins : 1; unsigned char numAppleAudioAccessories : 1; unsigned char numAppleMediaAccessories : 1; unsigned char numAppleTV4K2ndGenAccessories : 1; unsigned char numAppleTVAccessories : 1; unsigned char numBSPs : 1; unsigned char numBridgedAccessories : 1; unsigned char numBridgedTargetControllers : 1; unsigned char numCameraAccessories : 1; unsigned char numCameraAccessoriesReachabilityNotificationEnabled : 1; unsigned char numCameraAccessoriesRecordingAudioEnabled : 1; unsigned char numCameraAccessoriesRecordingEnabled : 1; unsigned char numCameraAccessoriesSmartBulletinNotificationEnabled : 1; unsigned char numCameraAccessoriesSupportRecording : 1; unsigned char numCameraAccessoriesWithActivityZonesEnabled : 1; unsigned char numCertifiedAccessories : 1; unsigned char numCertifiedBridgedTargetControllers : 1; unsigned char numCertifiedTargetControllers : 1; unsigned char numConfiguredScenes : 1; unsigned char numEventTriggers : 1; unsigned char numHAPAccessories : 1; unsigned char numHAPBLEAccessoriesSupportJet : 1; unsigned char numHAPBTAccessories : 1; unsigned char numHAPBatteryServiceAccessories : 1; unsigned char numHAPIPAccessories : 1; unsigned char numHAPIPAccessoriesSupportJet : 1; unsigned char numHAPNoeAccessoriesSupportJet : 1; unsigned char numHAPSpeakerServiceAccessories : 1; unsigned char numHomePods : 1; unsigned char numLightProfilesWithNaturalLightingEnabled : 1; unsigned char numLightProfilesWithNaturalLightingSupported : 1; unsigned char numLightProfilesWithNaturalLightingUsed : 1; unsigned char numMediaSystems : 1; unsigned char numMoe1Accessories : 1; unsigned char numMoe2Accessories : 1; unsigned char numNoeAccessories : 1; unsigned char numNoeBRCap : 1; unsigned char numNoeBRs : 1; unsigned char numNoeFullCap : 1; unsigned char numNoeMinCap : 1; unsigned char numNoeRoutCap : 1; unsigned char numNoeSleepCap : 1; unsigned char numNotCertifiedAccessories : 1; unsigned char numOfNonAcceptedParticipantsWithKnownCapability : 1; unsigned char numOfParticipantsHaveAccepted : 1; unsigned char numOfParticipantsHaveCloudShareIDAndHaveAccepted : 1; unsigned char numOfParticipantsHaveCloudShareIDButNotAccepted : 1; unsigned char numPoe2Count : 1; unsigned char numPoeCount : 1; unsigned char numPrimaryHAPSpeakerServiceAccessories : 1; unsigned char numResidentsEnabled : 1; unsigned char numRooms : 1; unsigned char numScenes : 1; unsigned char numServices : 1; unsigned char numShortcuts : 1; unsigned char numTargetControllers : 1; unsigned char numTelevisionAccessories : 1; unsigned char numTimerTriggers : 1; unsigned char numTriggerOwnedConfiguredScenes : 1; unsigned char numTriggers : 1; unsigned char numUsers : 1; unsigned char numWholeHouseAudioAccessories : 1; unsigned char numWoLAccessories : 1; unsigned char numZones : 1; unsigned char autoThirdPartyJetEnable : 1; unsigned char isOwner : 1; unsigned char isPrimaryResident : 1; unsigned char isResidentAvailable : 1; unsigned char primaryReportingDevice : 1; } _has;
}

@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) BOOL hasNumServices;
@property (nonatomic) unsigned int numServices;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) BOOL hasNumAdmins;
@property (nonatomic) unsigned int numAdmins;
@property (nonatomic) BOOL hasNumScenes;
@property (nonatomic) unsigned int numScenes;
@property (nonatomic) BOOL hasNumTriggers;
@property (nonatomic) unsigned int numTriggers;
@property (nonatomic) BOOL hasNumEventTriggers;
@property (nonatomic) unsigned int numEventTriggers;
@property (nonatomic) BOOL hasNumTimerTriggers;
@property (nonatomic) unsigned int numTimerTriggers;
@property (nonatomic) BOOL hasNumAccessoryServiceGroups;
@property (nonatomic) unsigned int numAccessoryServiceGroups;
@property (nonatomic) BOOL hasNumRooms;
@property (nonatomic) unsigned int numRooms;
@property (nonatomic) BOOL hasNumZones;
@property (nonatomic) unsigned int numZones;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL isResidentAvailable;
@property (nonatomic) BOOL hasIsPrimaryResident;
@property (nonatomic) BOOL isPrimaryResident;
@property (nonatomic) BOOL hasNumBridgedAccessories;
@property (nonatomic) unsigned int numBridgedAccessories;
@property (nonatomic) BOOL hasNumNotCertifiedAccessories;
@property (nonatomic) unsigned int numNotCertifiedAccessories;
@property (nonatomic) BOOL hasNumCertifiedAccessories;
@property (nonatomic) unsigned int numCertifiedAccessories;
@property (retain, nonatomic) NSMutableArray *eventTriggers;
@property (nonatomic) BOOL hasNumHAPAccessories;
@property (nonatomic) unsigned int numHAPAccessories;
@property (nonatomic) BOOL hasNumAppleMediaAccessories;
@property (nonatomic) unsigned int numAppleMediaAccessories;
@property (nonatomic) BOOL hasNumWholeHouseAudioAccessories;
@property (nonatomic) unsigned int numWholeHouseAudioAccessories;
@property (nonatomic) BOOL hasNumAppleAudioAccessories;
@property (nonatomic) unsigned int numAppleAudioAccessories;
@property (nonatomic) BOOL hasNumAppleTVAccessories;
@property (nonatomic) unsigned int numAppleTVAccessories;
@property (nonatomic) BOOL hasNumCameraAccessories;
@property (nonatomic) unsigned int numCameraAccessories;
@property (nonatomic) BOOL hasNumMediaSystems;
@property (nonatomic) unsigned int numMediaSystems;
@property (nonatomic) BOOL hasNumTargetControllers;
@property (nonatomic) unsigned int numTargetControllers;
@property (nonatomic) BOOL hasNumCertifiedTargetControllers;
@property (nonatomic) unsigned int numCertifiedTargetControllers;
@property (nonatomic) BOOL hasNumBridgedTargetControllers;
@property (nonatomic) unsigned int numBridgedTargetControllers;
@property (nonatomic) BOOL hasNumCertifiedBridgedTargetControllers;
@property (nonatomic) unsigned int numCertifiedBridgedTargetControllers;
@property (nonatomic) BOOL hasNumConfiguredScenes;
@property (nonatomic) unsigned int numConfiguredScenes;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;
@property (nonatomic) BOOL hasNumResidentsEnabled;
@property (nonatomic) unsigned int numResidentsEnabled;
@property (nonatomic) BOOL hasPrimaryReportingDevice;
@property (nonatomic) BOOL primaryReportingDevice;
@property (nonatomic) BOOL hasNumTelevisionAccessories;
@property (nonatomic) unsigned int numTelevisionAccessories;
@property (nonatomic) BOOL hasNetworkProtectionStatus;
@property (nonatomic) int networkProtectionStatus;
@property (nonatomic) BOOL hasNumAccessoriesWiFiPPSKCredential;
@property (nonatomic) unsigned int numAccessoriesWiFiPPSKCredential;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoFullAccess;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoFullAccess;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionFullAccess;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionFullAccess;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionHomeKitOnly;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionHomeKitOnly;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionUnprotected;
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionUnprotected;
@property (nonatomic) BOOL hasNumShortcuts;
@property (nonatomic) unsigned int numShortcuts;
@property (retain, nonatomic) NSMutableArray *homeKitMultiUserSettings;
@property (nonatomic) BOOL hasNumHAPIPAccessories;
@property (nonatomic) unsigned int numHAPIPAccessories;
@property (nonatomic) BOOL hasNumHAPBTAccessories;
@property (nonatomic) unsigned int numHAPBTAccessories;
@property (nonatomic) BOOL hasNumHAPBatteryServiceAccessories;
@property (nonatomic) unsigned int numHAPBatteryServiceAccessories;
@property (nonatomic) BOOL hasNumCameraAccessoriesSupportRecording;
@property (nonatomic) unsigned int numCameraAccessoriesSupportRecording;
@property (nonatomic) BOOL hasHomeCreationMonth;
@property (nonatomic) unsigned int homeCreationMonth;
@property (nonatomic) BOOL hasHomeCreationYear;
@property (nonatomic) unsigned int homeCreationYear;
@property (retain, nonatomic) NSMutableArray *hapServicesLists;
@property (retain, nonatomic) NSMutableArray *primaryHAPServicesLists;
@property (retain, nonatomic) NSMutableArray *hapServicesListCertifieds;
@property (retain, nonatomic) NSMutableArray *primaryHAPServicesListCertifieds;
@property (nonatomic) BOOL hasNumHAPSpeakerServiceAccessories;
@property (nonatomic) unsigned int numHAPSpeakerServiceAccessories;
@property (nonatomic) BOOL hasNumPrimaryHAPSpeakerServiceAccessories;
@property (nonatomic) unsigned int numPrimaryHAPSpeakerServiceAccessories;
@property (nonatomic) BOOL hasNumTriggerOwnedConfiguredScenes;
@property (nonatomic) unsigned int numTriggerOwnedConfiguredScenes;
@property (nonatomic) BOOL hasNumCameraAccessoriesRecordingEnabled;
@property (nonatomic) unsigned int numCameraAccessoriesRecordingEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesRecordingAudioEnabled;
@property (nonatomic) unsigned int numCameraAccessoriesRecordingAudioEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesSmartBulletinNotificationEnabled;
@property (nonatomic) unsigned int numCameraAccessoriesSmartBulletinNotificationEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesReachabilityNotificationEnabled;
@property (nonatomic) unsigned int numCameraAccessoriesReachabilityNotificationEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesWithActivityZonesEnabled;
@property (nonatomic) unsigned int numCameraAccessoriesWithActivityZonesEnabled;
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingSupported;
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingSupported;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingEnabled;
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingEnabled;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingUsed;
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingUsed;
@property (nonatomic) BOOL hasNumNoeBRs;
@property (nonatomic) unsigned int numNoeBRs;
@property (nonatomic) BOOL hasNumNoeAccessories;
@property (nonatomic) unsigned int numNoeAccessories;
@property (nonatomic) BOOL hasNumNoeFullCap;
@property (nonatomic) unsigned int numNoeFullCap;
@property (nonatomic) BOOL hasNumNoeSleepCap;
@property (nonatomic) unsigned int numNoeSleepCap;
@property (nonatomic) BOOL hasNumNoeMinCap;
@property (nonatomic) unsigned int numNoeMinCap;
@property (nonatomic) BOOL hasNumNoeRoutCap;
@property (nonatomic) unsigned int numNoeRoutCap;
@property (nonatomic) BOOL hasNumNoeBRCap;
@property (nonatomic) unsigned int numNoeBRCap;
@property (nonatomic) BOOL hasAutoThirdPartyJetEnable;
@property (nonatomic) BOOL autoThirdPartyJetEnable;
@property (nonatomic) BOOL hasNumHAPBLEAccessoriesSupportJet;
@property (nonatomic) unsigned int numHAPBLEAccessoriesSupportJet;
@property (nonatomic) BOOL hasNumHAPIPAccessoriesSupportJet;
@property (nonatomic) unsigned int numHAPIPAccessoriesSupportJet;
@property (nonatomic) BOOL hasNumHAPNoeAccessoriesSupportJet;
@property (nonatomic) unsigned int numHAPNoeAccessoriesSupportJet;
@property (nonatomic) BOOL hasHomeCreationCohortWeek;
@property (nonatomic) int homeCreationCohortWeek;
@property (nonatomic) BOOL hasFirstHAPAccessoryAddedCohortWeek;
@property (nonatomic) int firstHAPAccessoryAddedCohortWeek;
@property (nonatomic) BOOL hasCurrentMediaAccessoryFallbackMediaUserType;
@property (nonatomic) int currentMediaAccessoryFallbackMediaUserType;
@property (nonatomic) BOOL hasNumPoeCount;
@property (nonatomic) int numPoeCount;
@property (nonatomic) BOOL hasNumPoe2Count;
@property (nonatomic) int numPoe2Count;
@property (nonatomic) BOOL hasNumMoe1Accessories;
@property (nonatomic) unsigned int numMoe1Accessories;
@property (nonatomic) BOOL hasNumMoe2Accessories;
@property (nonatomic) unsigned int numMoe2Accessories;
@property (nonatomic) BOOL hasHomepodSynchLatency;
@property (nonatomic) unsigned int homepodSynchLatency;
@property (nonatomic) BOOL hasNumHomePods;
@property (nonatomic) unsigned int numHomePods;
@property (nonatomic) BOOL hasNumBSPs;
@property (nonatomic) unsigned int numBSPs;
@property (nonatomic) BOOL hasNumWoLAccessories;
@property (nonatomic) unsigned int numWoLAccessories;
@property (nonatomic) BOOL hasNumOfParticipantsHaveAccepted;
@property (nonatomic) unsigned int numOfParticipantsHaveAccepted;
@property (nonatomic) BOOL hasNumOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (nonatomic) unsigned int numOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (nonatomic) BOOL hasNumOfParticipantsHaveCloudShareIDButNotAccepted;
@property (nonatomic) unsigned int numOfParticipantsHaveCloudShareIDButNotAccepted;
@property (nonatomic) BOOL hasNumOfNonAcceptedParticipantsWithKnownCapability;
@property (nonatomic) unsigned int numOfNonAcceptedParticipantsWithKnownCapability;
@property (nonatomic) BOOL hasNumAppleTV4K2ndGenAccessories;
@property (nonatomic) unsigned int numAppleTV4K2ndGenAccessories;

+ (Class)eventTriggersType;
+ (Class)hapServicesListCertifiedType;
+ (Class)hapServicesListType;
+ (Class)homeKitMultiUserSettingsType;
+ (Class)primaryHAPServicesListCertifiedType;
+ (Class)primaryHAPServicesListType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsCurrentMediaAccessoryFallbackMediaUserType:(id)a0;
- (int)StringAsNetworkProtectionStatus:(id)a0;
- (void)addEventTriggers:(id)a0;
- (void)addHapServicesList:(id)a0;
- (void)addHapServicesListCertified:(id)a0;
- (void)addHomeKitMultiUserSettings:(id)a0;
- (void)addPrimaryHAPServicesList:(id)a0;
- (void)addPrimaryHAPServicesListCertified:(id)a0;
- (void)clearEventTriggers;
- (void)clearHapServicesListCertifieds;
- (void)clearHapServicesLists;
- (void)clearHomeKitMultiUserSettings;
- (void)clearPrimaryHAPServicesListCertifieds;
- (void)clearPrimaryHAPServicesLists;
- (id)currentMediaAccessoryFallbackMediaUserTypeAsString:(int)a0;
- (id)eventTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)eventTriggersCount;
- (id)hapServicesListAtIndex:(unsigned long long)a0;
- (id)hapServicesListCertifiedAtIndex:(unsigned long long)a0;
- (unsigned long long)hapServicesListCertifiedsCount;
- (unsigned long long)hapServicesListsCount;
- (id)homeKitMultiUserSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitMultiUserSettingsCount;
- (id)networkProtectionStatusAsString:(int)a0;
- (id)primaryHAPServicesListAtIndex:(unsigned long long)a0;
- (id)primaryHAPServicesListCertifiedAtIndex:(unsigned long long)a0;
- (unsigned long long)primaryHAPServicesListCertifiedsCount;
- (unsigned long long)primaryHAPServicesListsCount;

@end
