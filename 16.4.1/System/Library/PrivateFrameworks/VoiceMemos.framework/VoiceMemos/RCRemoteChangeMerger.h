@class NSString, NSMutableDictionary, NSHashTable, NSManagedObjectContext;

@interface RCRemoteChangeMerger : NSObject <RCStoreChangeMergerDelegate> {
    NSMutableDictionary *storeMergers;
    NSHashTable *_backgroundContexts;
    NSManagedObjectContext *_viewContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundContexts;
- (id)initWithStores:(id)a0 viewContext:(id)a1 transactionAuthorToObserve:(id)a2;
- (void)addContextToMergeChangesInto:(id)a0;
- (void).cxx_destruct;
- (void)_handleRemoteChangeNotification:(id)a0;

@end
