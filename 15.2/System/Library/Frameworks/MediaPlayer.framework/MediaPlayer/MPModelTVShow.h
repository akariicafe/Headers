@class NSString, MPModelTVShowCreator;

@interface MPModelTVShow : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MPModelTVShowCreator *creator;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)kindWithSeasonKind:(id)a0;
+ (id)__editorNotes_KEY;
+ (id)__episodesCount_KEY;
+ (id)__creator_KEY;
+ (id)__shortTitle_KEY;

- (id)artworkCatalog;
- (id)humanDescription;
- (id)editorialArtworkCatalog;

@end
