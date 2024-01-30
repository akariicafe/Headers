@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject

@property (copy, nonatomic) id /* block */ previewArtworkCatalogBlock;
@property (copy, nonatomic) NSArray *staticAssets;
@property (copy, nonatomic) NSString *title;

+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kind;
+ (id)classesForSecureCoding;
+ (id)__staticAssets_KEY;
+ (id)__previewArtworkCatalogBlock_KEY;

- (id)humanDescription;
- (id)previewArtworkCatalog;

@end
