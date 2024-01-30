@class NSSet, NSString, NSDate;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>

@property (readonly) id<HMDDoorbellChimeControllerContext> context;
@property (copy) NSSet *availableCharacteristics;
@property (retain) NSDate *lastUnidentifiedChimeDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (id)clientIdentifier;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (void)handleCharacteristicsValueUpdatedNotification:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (void)handleUpdatedPersonIdentificationInformation;
- (void)_handleCharacteristicsValueUpdatedNotification:(id)a0;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)a0 attemptCloudPullIfNoPersonsFound:(BOOL)a1;
- (void)_chimeCoreUtilDoorbellWithDestination:(id)a0 shouldPlayChime:(BOOL)a1 logEvent:(id)a2 personIdentificationText:(id)a3;
- (id)_destinationIDsToNotifyForDoorbellChimeUsingCoreUtilAction;
- (BOOL)_isDoorbellChimeSettingEnabledForHomePodAccessory:(id)a0;

@end
