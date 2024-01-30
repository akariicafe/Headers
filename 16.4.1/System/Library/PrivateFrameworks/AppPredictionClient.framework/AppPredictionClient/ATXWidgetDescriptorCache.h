@class NSDictionary, NSSet, NSString, _PASSimpleCoalescingTimer, CHSWidgetDescriptorProvider, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver> {
    CHSWidgetDescriptorProvider *_provider;
    NSString *_descriptorMetadataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    unsigned long long _coalescedDescriptorUpdateOptions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_allDescriptors;
    NSHashTable *_observers;
    NSDictionary *_intentToHomeScreenDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToHomeScreenDescriptorDictionary;
}

@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)fetchHomeScreenWidgetDescriptorMetadataWithError:(id *)a0;
- (id)initWithPath:(id)a0;
- (id)_queue_allVisibleDescriptors;
- (id)fetchAccessoryWidgetDescriptorMetadataWithError:(id *)a0;
- (id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (void)_scheduleCoalescedDescriptorUpdateOperation;
- (void)_updateDescriptorMappings;
- (id)_queue_homeScreenWidgetDescriptors;
- (void)registerObserver:(id)a0;
- (id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)homeScreenDescriptorForContainerBundleId:(id)a0 widgetKind:(id)a1;
- (void)dealloc;
- (id)_updateAllDescriptorMetadataOnInternalQueue;
- (void)_queue_descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)unregisterObserver:(id)a0;
- (BOOL)_writeAllDescriptorMetadataOnInternalQueue:(id)a0 withError:(id *)a1;
- (id)_fetchAllDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)init;
- (id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)a0 descriptors:(id)a1;
- (id)initWithProvider:(id)a0 path:(id)a1;
- (id)homeScreenDescriptorForIntent:(id)a0;
- (void).cxx_destruct;

@end
