@class MKFCKHome, NSSet, NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface MKFCKHAPAccessory : MKFCKAccessory

@property (nonatomic) BOOL airPlayEnabled;
@property (nonatomic) BOOL announceEnabled;
@property (nonatomic) long long cameraAccessModeAtHome;
@property (nonatomic) long long cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (nonatomic) BOOL cameraActivityZonesIncludedForSignificantEventDetection;
@property (nonatomic) long long cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (nonatomic) BOOL hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (nonatomic) BOOL hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (nonatomic) BOOL interactionHoldDurationEnabled;
@property (nonatomic) long long interactionHoldDurationSeconds;
@property (nonatomic) BOOL interactionIgnoreRepeatEnabled;
@property (nonatomic) long long interactionIgnoreRepeatSeconds;
@property (nonatomic) BOOL interactionTouchAccommodationsEnabled;
@property (nonatomic) BOOL lightWhenUsingSiriEnabled;
@property (nonatomic) long long matterNodeID;
@property (nonatomic) long long matterProductID;
@property (nonatomic) long long matterVendorID;
@property (nonatomic) long long needsOnboarding;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDictionary *serviceApplicationData;
@property (retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes;
@property (retain, nonatomic) NSDictionary *serviceConfiguredNames;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (nonatomic) BOOL shareSiriAnalytics;
@property (nonatomic) BOOL shareSpeakerAnalytics;
@property (nonatomic) BOOL siriEnabled;
@property (nonatomic) BOOL siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (nonatomic) BOOL soundAlertEnabled;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long visionDoubleTapSettingsTimeoutInterval;
@property (nonatomic) long long visionSpeakingRate;
@property (nonatomic) BOOL visionVoiceOverAudioDuckingEnabled;
@property (nonatomic) BOOL visionVoiceOverEnabled;
@property (retain, nonatomic) MKFCKHome *activeNetworkRouterInHome;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
