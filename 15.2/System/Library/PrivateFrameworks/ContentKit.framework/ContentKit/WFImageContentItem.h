@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL imageIsAnimated;
@property (nonatomic) BOOL isScreenshot;

+ (BOOL)supportsSecureCoding;
+ (id)typeDescription;
+ (id)imageTypes;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (id)itemWithImage:(id)a0 named:(id)a1 preferredFileType:(id)a2;
+ (id)itemWithFile:(id)a0 preferredFileType:(id)a1;

- (id)make;
- (void)encodeWithCoder:(id)a0;
- (id)height;
- (id)metadata;
- (id)width;
- (id)orientation;
- (id)model;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)location;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)preferredObjectType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateImageFileForType:(id)a0 includingMetadata:(BOOL)a1 compressionQuality:(id)a2 error:(id *)a3;
- (id)dateTaken;
- (BOOL)isObjectBacked;
- (id)imageFile;
- (BOOL)isContent;

@end
