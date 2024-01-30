@class NSSet, NSDictionary, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSArray *_homeScreenConfig;
    NSUserDefaults *_userDefaults;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
}

@property (class, readonly, nonatomic) NSDictionary *assets;

- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (BOOL)_isDayZeroExperience;
- (void).cxx_destruct;
- (id)_retrieveLastUpdateDate;
- (id)initWithSpotlightAppLaunchHistogram:(id)a0;
- (id)_fetchHomeScreenConfigWithError:(id *)a0;
- (void)updateDefaultsWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateDefaultsOnQueueWithReason:(id)a0;
- (void)waitForPendingAsynchronousOperations;
- (void)dealloc;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;

@end
