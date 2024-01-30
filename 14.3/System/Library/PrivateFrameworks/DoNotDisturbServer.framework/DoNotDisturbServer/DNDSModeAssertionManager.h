@class NSString, DNDSModeAssertionStore, DNDSClientDetailsProvider;
@protocol DNDSBackingStore;

@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating> {
    id<DNDSBackingStore> _backingStore;
    DNDSModeAssertionStore *_store;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _storeLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;
- (id)clientDetailsForClientIdentifier:(id)a0;
- (id)initWithBackingStore:(id)a0 clientDetailsProvider:(id)a1;
- (id)initWithBackingStoreURL:(id)a0 clientDetailsProvider:(id)a1;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (id)updateModeAssertionsWithContextHandler:(id /* block */)a0 error:(id *)a1;
- (id)sysdiagnoseDataIdentifier;
- (void)_loadDataFromBackingStore;
- (id)modeAssertionsMatchingPredicate:(id)a0;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)a0;
- (id)sysdiagnoseDataForDate:(id)a0;

@end
