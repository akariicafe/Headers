@class NSSet, NSString, CHSAvocadoDescriptorProvider, _PASSimpleCoalescingTimer, NSDictionary;

@interface ATXAvocadoDescriptorCache : NSObject <CHSAvocadoDescriptorProviderObserver> {
    CHSAvocadoDescriptorProvider *_avocadoDescriptorProvider;
    NSString *_descriptorsWithAdditionalDataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    NSDictionary *_intentToDescriptorDictionary;
}

@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)descriptorsDidChangeForAvocadoDescriptorProvider:(id)a0;
- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeDeletedItemsFromAdditionalDataCache;
- (void)dealloc;
- (void)_markMissingAvocadoDescriptorsAsUninstalled:(id)a0;
- (id)_updateAvocadoDescriptorsWithAdditionalData;
- (void)_writeNewAvocadoDescriptorsIfNecessary:(id)a0 oldAvocadoDescriptors:(id)a1;
- (void)_descriptorsDidUpdate;
- (id)fetchAvocadoDescriptorsWithAdditionalDataWithError:(id *)a0;
- (id)_appBundleIdForExtensionBundleId:(id)a0;
- (BOOL)_writeAvocadoDescriptorsWithAdditionalData:(id)a0 withError:(id *)a1;
- (void)_createIntentToDescriptorDictionary;
- (id)descriptorForIntent:(id)a0;
- (id)_mergeNewDescriptorsWithOldDescriptors:(id)a0;

@end
