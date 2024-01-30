@class WFShazamMedia;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFShazamMedia *media;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;

- (id)artist;
- (id)artworkURL;
- (id)isExplicit;
- (id)videoURL;
- (id)title;
- (id)appleMusicURL;
- (id)appleMusicID;
- (id)lyricsSnippet;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)preferredFileType;
- (void)getArtworkDataWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)shazamURL;
- (id)lyricsSnippetSynced;

@end
