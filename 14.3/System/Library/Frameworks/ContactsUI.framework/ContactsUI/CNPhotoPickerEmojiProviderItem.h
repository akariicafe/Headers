@class UIColor, NSString, CNPhotoPickerColorVariant, NSData;

@interface CNPhotoPickerEmojiProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *stringRepresentation;
@property (retain, nonatomic) NSData *dataRepresentation;
@property (retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (readonly, nonatomic) NSString *itemText;
@property (readonly, nonatomic) UIColor *backgroundColor;

+ (id)addNewEmojiProviderItemWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)suggestedEmojiItemsForString:(id)a0 variantsManager:(id)a1 size:(struct CGSize { double x0; double x1; })a2 locale:(id)a3;
+ (id)thumbnailViewForImage:(id)a0;

- (id)imageData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStringRepresentation:(id)a0 backgroundColorVariant:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)copyWithStringRepresentation:(id)a0;
- (id)generateImageRepresentationForEmojiString:(id)a0;
- (id)updatedProviderItemWithText:(id)a0 backgroundColorVariant:(id)a1;
- (id)updatedProviderItemWithText:(id)a0;
- (BOOL)allowsVariants;
- (unsigned long long)imageType;
- (BOOL)allowsMoveAndScale;
- (id)thumbnailImageData;
- (id)generateThumbnailImageDataIfNeeded;
- (void)updateVisualIdentity:(id)a0;
- (id)createVariantsItemsWithVariantsManager:(id)a0;
- (id)contactImageForMetadataStore;

@end
