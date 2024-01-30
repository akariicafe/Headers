@class NSSet, NSString, NSDate;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : NSObject <HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate>

@property (retain) NSSet *availableCharacteristics;
@property (retain) NSDate *lastUnidentifiedChimeDate;
@property (retain) id<HMDDoorbellChimeControllerContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)dealloc;
- (void)configureWithContext:(id)a0;
- (id)logIdentifier;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (void)_handleCharacteristicsValueUpdated:(id)a0;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)a0 attemptCloudPullIfNoPersonsFound:(BOOL)a1;
- (void)handleCharacteristicsValueUpdated:(id)a0;
- (void)handleUpdatedPersonIdentificationInformation;

@end
