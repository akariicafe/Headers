@class NSSet, NSDictionary, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSArray *_homeScreenConfig;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchHomeScreenConfigWithError:(id *)a0;
- (void)dealloc;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)a0 installDatesCache:(id)a1;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateDefaultsWithSystemDescriptors:(id)a0 installDatesCache:(id)a1;
- (void)_updateDefaultsOnQueue;
- (id)_retrieveLastUpdateDate;

@end
