@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (nonatomic) BOOL hasBiography;
@property (nonatomic) long long songCount;
@property (nonatomic) long long albumCount;
@property (copy, nonatomic) MPModelGenre *genre;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__genre_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__songCount_KEY;
+ (id)__albumCount_KEY;
+ (id)__hasBiography_KEY;
+ (id)kindWithAlbumKind:(id)a0;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
