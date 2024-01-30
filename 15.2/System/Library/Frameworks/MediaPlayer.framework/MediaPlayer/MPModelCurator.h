@class NSString;

@interface MPModelCurator : MPModelPerson

@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) long long curatorKind;
@property (nonatomic) long long curatorSubKind;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) id /* block */ brandLogoArtworkCatalogBlock;
@property (copy, nonatomic) NSString *handle;

+ (id)__shortEditorNotes_KEY;
+ (id)__handle_KEY;
+ (id)__curatorKind_KEY;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__shortName_KEY;
+ (long long)genericObjectType;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__editorNotes_KEY;
+ (id)__curatorSubKind_KEY;

- (id)editorialArtworkCatalog;
- (id)brandLogoArtworkCatalog;

@end
