@class NSArray, MSPFavoritesContainer, NewMSPQuery;

@interface MSPCollectionsQuery : NewMSPQuery

@property (readonly) NSArray *contents;
@property (retain, nonatomic) MSPFavoritesContainer *itemContainer;
@property (retain, nonatomic) NewMSPQuery *itemQuery;

- (void).cxx_destruct;
- (void)addOrUpdateObject:(id)a0 completion:(id /* block */)a1;
- (void)addOrUpdateObjects:(id)a0 completion:(id /* block */)a1;
- (id)initWithCollectionsContainer:(id)a0 itemContainer:(id)a1 delegate:(id)a2;
- (id)initWithCollectionsContainer:(id)a0 itemContainer:(id)a1 delegate:(id)a2 filteredWithBlock:(id /* block */)a3;
- (void)processContentsUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)queryContentsDidChange:(id)a0 contentsVersion:(unsigned long long)a1;
- (void)removeObject:(id)a0 completion:(id /* block */)a1;
- (void)removeObjects:(id)a0 completion:(id /* block */)a1;
- (void)setCachedContents:(id)a0;
- (id)subQueryFilteredWithBlock:(id /* block */)a0;

@end
