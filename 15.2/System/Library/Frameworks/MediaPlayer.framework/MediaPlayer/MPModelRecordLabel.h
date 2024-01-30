@class NSString;

@interface MPModelRecordLabel : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *shortDescriptionText;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__name_KEY;
+ (long long)genericObjectType;
+ (id)__shortDescriptionText_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
