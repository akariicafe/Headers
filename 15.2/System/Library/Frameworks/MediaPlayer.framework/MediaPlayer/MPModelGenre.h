@class NSString, NSDate;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__name_KEY;
+ (long long)genericObjectType;
+ (id)__libraryAddedDate_KEY;
+ (id)kindWithAlbumKind:(id)a0;

- (id)artworkCatalog;
- (id)humanDescription;

@end
