@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (nonatomic) BOOL hasBiography;
@property (nonatomic) long long songCount;
@property (nonatomic) long long albumCount;
@property (copy, nonatomic) MPModelGenre *genre;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isClassicalExperienceAvailable) BOOL classicalExperienceAvailable;
@property (nonatomic) BOOL isFavorite;
@property (copy, nonatomic) NSDate *dateFavorited;

+ (long long)genericObjectType;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)kindWithAlbumKind:(id)a0;
+ (id)__songCount_KEY;
+ (id)__albumCount_KEY;
+ (id)__classicalExperienceAvailable_KEY;
+ (id)__dateFavorited_KEY;
+ (id)__genre_KEY;
+ (id)__hasBiography_KEY;
+ (id)__isFavorite_KEY;
+ (id)__libraryAddedDate_KEY;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
