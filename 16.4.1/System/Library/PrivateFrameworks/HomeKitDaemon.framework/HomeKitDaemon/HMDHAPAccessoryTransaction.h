@class NSData, NSString, NSArray, NSDate, HMFConnectivityInfo, HAPAccessory, NSSet, NSNumber;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (retain, nonatomic) NSData *chipPairingsData;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSNumber *certificationStatus;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (retain, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSNumber *hardwareSupport;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (copy, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property (retain, nonatomic) NSNumber *suspendedState;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (copy, nonatomic) NSData *cameraActivityZones;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (retain, nonatomic) NSNumber *enhancedAuthMethod;
@property (retain, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property (retain, nonatomic) NSNumber *chipNodeID;
@property (retain, nonatomic) NSNumber *chipVendorID;
@property (retain, nonatomic) NSNumber *chipProductID;
@property (retain, nonatomic) NSData *chipAttributeDatabase;
@property (copy, nonatomic) NSSet *chipPairings;

+ (id)properties;
+ (id)cd_getMKFHAPAccessoryFromAccessory:(id)a0;
+ (id)cd_getMKFHAPAccessoryFromAccessoryUUID:(id)a0;
+ (id)cd_getMKFServiceFromAccessoryUUID:(id)a0 serviceInstanceId:(id)a1;

@end
