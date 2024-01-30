@class NSMutableDictionary, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSPersistentPropertyListStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_store;
    WBSCoalescedAsynchronousWriter *_writer;
}

@property (copy, nonatomic) id /* block */ createEmptyStoreHandler;
@property (copy, nonatomic) id /* block */ validateLoadedStoreHandler;

- (id)objectForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;
- (id)_existingSavedData;
- (void)_prepareEmptyStore;
- (void)_loadDataIfNecessary;
- (void)clearStoreSynchronously;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dateForKey:(id)a0;
- (id)_dataRepresentation;
- (id)dataForKey:(id)a0;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)dictionaryForKey:(id)a0;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (void)saveStoreSynchronously;
- (void)saveAndCloseStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0;
- (id)arrayForKey:(id)a0;

@end
