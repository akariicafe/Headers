@class NSArray;

@interface MSPFavoriteTransitLinesQuery : MSPFavoritesQuery

@property (readonly) NSArray *contents;

- (id)initWithContainer:(id)a0 delegate:(id)a1 filteredWithBlock:(id /* block */)a2;

@end
