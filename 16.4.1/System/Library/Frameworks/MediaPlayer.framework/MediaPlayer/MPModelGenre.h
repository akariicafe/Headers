@class NSString, NSDate;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (long long)genericObjectType;
+ (id)__name_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)kindWithAlbumKind:(id)a0;
+ (id)__libraryAddedDate_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
