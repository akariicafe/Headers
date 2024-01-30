@class NSSet, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSUserDefaults *_userDefaults;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
    id _currentLocaleChangeToken;
}

@property (class, readonly, nonatomic) NSDictionary *assets;

- (void)_updateDefaultsOnQueueWithReason:(id)a0;
- (id)initWithSpotlightAppLaunchHistogram:(id)a0;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (void)waitForPendingAsynchronousOperations;
- (void)updateDefaultsWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isDayZeroExperience;
- (id)_retrieveLastUpdateDate;
- (void).cxx_destruct;

@end
