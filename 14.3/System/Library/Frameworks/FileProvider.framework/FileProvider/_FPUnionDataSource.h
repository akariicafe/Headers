@class NSString, NSArray;
@protocol FPCollectionDataSourceDelegate;

@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate> {
    NSArray *_collections;
    BOOL _isRunning;
}

@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCollections:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)start;
- (void)invalidate;
- (void)enumerationMightHaveResumed;

@end
