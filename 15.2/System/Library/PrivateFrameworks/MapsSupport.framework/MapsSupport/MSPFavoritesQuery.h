@class NSArray;

@interface MSPFavoritesQuery : NewMSPQuery

@property (readonly) NSArray *contents;

- (BOOL)isObject:(id)a0 equalTo:(id)a1;
- (id)favoriteForFavorite:(id)a0;

@end
