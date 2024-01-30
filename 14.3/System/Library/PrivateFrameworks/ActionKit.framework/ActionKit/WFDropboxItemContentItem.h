@interface WFDropboxItemContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)isAvailableOnPlatform:(long long)a0;

- (id)metadata;
- (id)outputTypes;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)richListTitle;
- (BOOL)hasStringOutput;
- (BOOL)canEncodeWithCoder:(id)a0;
- (id)overrideFilename;
- (id)representedFileType;
- (id)representedFilename;

@end
