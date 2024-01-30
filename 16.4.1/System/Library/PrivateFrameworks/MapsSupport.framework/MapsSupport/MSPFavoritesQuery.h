@class NSArray;

@interface MSPFavoritesQuery : NewMSPQuery

@property (readonly) NSArray *contents;

- (id)favoriteForFavorite:(id)a0;
- (BOOL)isObject:(id)a0 equalTo:(id)a1;

@end
