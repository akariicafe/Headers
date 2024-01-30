@class NSString, NSMutableArray;

@interface ICCDCSIReindexer : NSObject <ICReindexing>

@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableIndex;
+ (id)sharedReindexer;

- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)registerCoreDataCoreSpotlightDelegate:(id)a0;
- (void)_reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterCoreDataCoreSpotlightDelegate:(id)a0;
- (void)stopIndexing;

@end
