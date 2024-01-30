@class NSString, MPMediaItem;

@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSString *albumTitle;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (BOOL)isAvailableOnPlatform:(long long)a0;

- (id)assetURL;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)additionalRepresentationsForSerialization;
- (id)preferredFileType;

@end
