@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) WFImage *image;
@property (nonatomic) BOOL imageIsAnimated;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3;
+ (id)imageTypes;
+ (id)itemWithImage:(id)a0 named:(id)a1 preferredFileType:(id)a2;

- (id)width;
- (id)make;
- (id)model;
- (void).cxx_destruct;
- (id)metadata;
- (id)location;
- (id)orientation;
- (id)height;
- (BOOL)isScreenshot;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)preferredObjectType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)dateTaken;
- (BOOL)isObjectBacked;
- (id)imageFile;
- (id)generateImageFileForType:(id)a0 includingMetadata:(BOOL)a1 compressionQuality:(id)a2 error:(id *)a3;
- (BOOL)isContent;

@end
