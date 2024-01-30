@class NSString, NSMutableArray;

@interface ICCDCSIReindexer : NSObject <ICReindexing>

@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedReindexer;
+ (id)searchableIndex;

- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerCoreDataCoreSpotlightDelegate:(id)a0;
- (void)stopIndexing;
- (void)_reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterCoreDataCoreSpotlightDelegate:(id)a0;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;

@end
