@class NSDictionary, NSSet, NSString, CHSAvocadoDescriptorProvider, _PASSimpleCoalescingTimer, NSObject, ATXDefaultHomeScreenItemUpdater;
@protocol ATXCategoricalHistogramProtocol, OS_dispatch_queue;

@interface ATXAvocadoDescriptorCache : NSObject <CHSAvocadoDescriptorProviderObserver> {
    CHSAvocadoDescriptorProvider *_provider;
    NSString *_descriptorsWithAdditionalDataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    ATXDefaultHomeScreenItemUpdater *_defaultHomeScreenItemUpdater;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchHistogram;
    NSDictionary *_intentToDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToDescriptorDictionary;
}

@property (readonly, copy) NSSet *descriptors;
@property (retain) id<ATXCategoricalHistogramProtocol> spotlightLaunchHistogram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)containerBundleIdForExtensionBundleId:(id)a0;

- (void)updateDefaultsWithSystemDescriptorsAndInstallDatesCache:(id)a0 reason:(id)a1;
- (id)initWithPath:(id)a0;
- (id)descriptorForContainerBundleId:(id)a0 widgetKind:(id)a1;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (id)initWithProvider:(id)a0 path:(id)a1;
- (void)_descriptorsDidUpdateOnInternalQueueWithReason:(id)a0;
- (id)_mergeNewDescriptorsWithOldDescriptorsOnInternalQueue:(id)a0;
- (id)_updateAvocadoDescriptorsWithAdditionalDataOnInternalQueue;
- (id)fetchAvocadoDescriptorsWithAdditionalDataWithError:(id *)a0;
- (void)removeDeletedItemsFromAdditionalDataCache;
- (void).cxx_destruct;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)init;
- (void)updateDefaultsIfNeededWithSystemDescriptorsAndInstallDatesCache:(id)a0 reason:(id)a1;
- (id)descriptorForIntent:(id)a0;
- (id)_fetchAvocadoDescriptorsWithAdditionalDataOnInternalQueueWithError:(id *)a0;
- (void)_markMissingAvocadoDescriptorsAsUninstalledOnInternalQueue:(id)a0;
- (void)_writeNewAvocadoDescriptorsOnInternalQueueIfNecessary:(id)a0 oldAvocadoDescriptors:(id)a1;
- (void)dealloc;
- (BOOL)_writeAvocadoDescriptorsWithAdditionalDataOnInternalQueue:(id)a0 withError:(id *)a1;
- (void)_updateDescriptorMappings;

@end
