@class AVTStickerConfiguration, CNAvatarStickerGeneratorProvider, CNPhotoPickerColorVariant, NSData, UIImage, AVTRenderingScope, AVTAvatarRecordImageProvider;
@protocol AVTAvatarRecord;

@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem

@property (retain, nonatomic) NSData *_originalImageData;
@property (retain, nonatomic) NSData *_generatedImageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) UIImage *loadingPlaceholderImage;
@property (retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (retain, nonatomic) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider;
@property (retain, nonatomic) AVTRenderingScope *renderingScope;
@property (retain, nonatomic) AVTAvatarRecordImageProvider *imageProvider;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTStickerConfiguration *poseConfiguration;

- (id)imageData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)variantIdentifier;
- (BOOL)allowsVariants;
- (unsigned long long)imageType;
- (id)initWithOriginalImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColorVariant:(id)a2;
- (id)initWithOriginalImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)copyWithColor:(id)a0;
- (id)renderDefaultAvatarImage;
- (id)initWithAvatarRecord:(id)a0 imageProvider:(id)a1 renderingScope:(id)a2 renderingQueue:(id)a3 callbackQueue:(id)a4;
- (id)copyWithPoseConfiguration:(id)a0 generatorProvider:(id)a1;
- (id)renderAvatarWithPoseWithSize:(double)a0;
- (id)renderAvatarWithBackgroundWithImageData:(id)a0;
- (id)renderAvatarWithBackgroundWithImage:(id)a0;
- (id)generateImageDataIfNeeded;
- (BOOL)allowsMoveAndScale;
- (BOOL)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (id)generateThumbnailImageDataIfNeeded;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)a0;
- (void)updateVisualIdentity:(id)a0;
- (id)createVariantsItemsWithVariantsManager:(id)a0;
- (id)contactImageForMetadataStore;

@end
