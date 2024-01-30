@interface WFPodcastEpisodeContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)episode;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)preferredFileType;
- (id)getArtworkURLForSize:(struct CGSize { double x0; double x1; })a0 type:(id)a1;
- (void)getArtworkDataWithURL:(id)a0 completionHandler:(id /* block */)a1;

@end
