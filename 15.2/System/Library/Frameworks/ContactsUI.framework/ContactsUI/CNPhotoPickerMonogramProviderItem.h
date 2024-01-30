@class UIColor, NSString, CNAvatarImageRenderer, NSData, CNVisualIdentity;
@protocol CNAvatarImageRenderingScope;

@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem>

@property (retain, nonatomic) NSData *monogramData;
@property (nonatomic) BOOL isVariantOptionItem;
@property (retain, nonatomic) NSString *monogramText;
@property (retain, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (retain, nonatomic) id<CNAvatarImageRenderingScope> renderingScope;
@property (nonatomic) BOOL isContactImage;
@property (nonatomic) BOOL hasUnknownColor;
@property (readonly, nonatomic) NSString *itemText;
@property (readonly, nonatomic) UIColor *backgroundColor;

- (BOOL)allowsEditing;
- (id)initWithImageData:(id)a0 thumbnailImageData:(id)a1 fullscreenImageData:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 renderingScope:(id)a4 avatarRenderer:(id)a5 isVariantOptionItem:(BOOL)a6;
- (id)variantIdentifier;
- (id)imageData;
- (BOOL)allowsVariants;
- (BOOL)allowsMoveAndScale;
- (unsigned long long)imageType;
- (BOOL)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)generateThumbnailImageDataIfNeeded;
- (void)updateVisualIdentity:(id)a0;
- (id)createVariantsItemsWithVariantsManager:(id)a0;
- (id)contactImageForMetadataStore;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isGrayMonogramItem;
- (void)renderMonogramData;
- (void)updateWithMonogramData:(id)a0;
- (id)monogramVariantItemForColor:(id)a0;
- (id)createColorVariantItems;
- (id)createColorVariantItemsExcludingSelf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)thumbnailImageData;
- (id)updatedProviderItemWithText:(id)a0;

@end
