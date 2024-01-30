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
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

+ (id)log;

- (id)variantIdentifier;
- (id)imageData;
- (BOOL)allowsVariants;
- (BOOL)allowsMoveAndScale;
- (unsigned long long)imageType;
- (id)originalImageData;
- (BOOL)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)generateThumbnailImageDataIfNeeded;
- (void)updateVisualIdentity:(id)a0;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)a0;
- (id)createVariantsItemsWithVariantsManager:(id)a0;
- (id)contactImageForMetadataStore;
- (id)copyWithColor:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForMemojiMetadata;
- (id)initWithOriginalImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColorVariant:(id)a2;
- (id)initWithOriginalImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)copyWithPoseConfiguration:(id)a0 generatorProvider:(id)a1;
- (id)initWithAvatarRecord:(id)a0 imageProvider:(id)a1 renderingScope:(id)a2 renderingQueue:(id)a3 callbackQueue:(id)a4;
- (id)renderDefaultAvatarImage;
- (id)renderAvatarWithPoseWithSize:(double)a0;
- (id)generateImageDataIfNeeded;
- (id)renderAvatarWithBackgroundWithImageData:(id)a0;
- (id)renderAvatarWithBackgroundWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
