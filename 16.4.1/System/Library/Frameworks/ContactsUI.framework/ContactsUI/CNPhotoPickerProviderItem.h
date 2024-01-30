@class NSString, UIImage, NSData, NSDate;
@protocol CNPhotoPickerProviderItemDelegate, CNScheduler;

@interface CNPhotoPickerProviderItem : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *fullSizeImage;
@property (retain, nonatomic) UIImage *croppedFullSizeImage;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) UIImage *loadingPlaceholderImage;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) NSData *fullscreenImageData;
@property (retain, nonatomic) NSData *filteredImageData;
@property (retain, nonatomic) NSString *imageFilterName;
@property (retain, nonatomic) NSString *localizedVariantDisplayName;
@property (readonly, nonatomic) NSData *originalImageData;
@property (retain, nonatomic) NSString *recentsIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) unsigned long long imageType;
@property (nonatomic) BOOL allowsEditing;
@property (readonly, nonatomic) BOOL allowsVariants;
@property (readonly, nonatomic) BOOL allowsMoveAndScale;
@property (readonly, nonatomic) BOOL shouldShowCaption;
@property (readonly, nonatomic) NSString *localizedVariantsTitle;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic) id<CNScheduler> renderingQueue;
@property (readonly, nonatomic) id<CNScheduler> callbackQueue;
@property (retain, nonatomic) NSDate *sortDate;
@property (weak, nonatomic) id<CNPhotoPickerProviderItemDelegate> delegate;

+ (id)thumbnailViewForImage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)updateContact:(id)a0;
- (void).cxx_destruct;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)a0;
- (void)clearThumbnailImage;
- (id)contactImageForMetadataStore;
- (id)createVariantsItemsWithVariantsManager:(id)a0;
- (void)fullSizeViewWithCompletion:(id /* block */)a0;
- (void)generateAllImageDatasIfNeeded;
- (id)generatePhotoFilterVariants;
- (id)generateThumbnailImageDataIfNeeded;
- (id)generateThumbnailImageDataWithData:(id)a0;
- (id)initWithImageData:(id)a0 thumbnailImageData:(id)a1 fullscreenImageData:(id)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithImageData:(id)a0 thumbnailImageData:(id)a1 fullscreenImageData:(id)a2 imageFilterName:(id)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 renderingQueue:(id)a5 callbackQueue:(id)a6;
- (id)rotateImageDataIfNeeded:(id)a0;
- (void)thumbnailViewWithCompletion:(id /* block */)a0;
- (void)thumbnailViewWithPlaceholderProvider:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateTintColorIfNeeded:(id)a0;
- (void)updateVisualIdentity:(id)a0;

@end
