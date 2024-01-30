@class UIImage, UIImageSymbolConfiguration;

@interface PXBadgeHelper : NSObject

@property (class, readonly, nonatomic) UIImage *favoriteBadgeImage;
@property (class, readonly, nonatomic) UIImage *favoriteBadgeImageMini;
@property (class, readonly, nonatomic) UIImage *favoritesCollectionBadgeImage;
@property (class, readonly, nonatomic) UIImage *panoramaBadgeImage;
@property (class, readonly, nonatomic) UIImage *panoramaBadgeImageMini;
@property (class, readonly, nonatomic) UIImage *contentSyndicationBadgeImage;
@property (class, readonly, nonatomic) UIImage *contentSyndicationBadgeImageMini;
@property (class, readonly, nonatomic) UIImage *contentSyndicationGuestAssetBadgeImage;
@property (class, readonly, nonatomic) UIImage *ocrAssetBadgeImage;
@property (class, readonly, nonatomic) UIImage *sharedLibraryBadgeImageMini;
@property (class, readonly, nonatomic) UIImage *cloudBadgeImageMini;
@property (class, readonly, nonatomic) UIImage *gradientImage;
@property (class, readonly, nonatomic) UIImage *livePhotoBadgeShadowedImage;
@property (class, readonly, nonatomic) UIImage *loopingBadgeImage;
@property (class, readonly, nonatomic) UIImage *loopingBadgeTemplateImage;
@property (class, readonly, nonatomic) UIImage *cloudBadgeImage;
@property (class, readonly, nonatomic) UIImage *sharedLibraryBadgeImage;
@property (class, readonly, nonatomic) UIImage *autoReframingImage;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *miniSymbolConfiguration;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *smallSymbolConfiguration;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *mediumSymbolConfiguration;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *mediumBodySymbolConfiguration;
@property (class, readonly, nonatomic) UIImageSymbolConfiguration *smallBodySymbolConfiguration;

+ (id)debugBackgroundImageWithBadges:(unsigned long long)a0;
+ (id)_favoriteBadgeImageWithSymbolConfiguration:(id)a0;
+ (id)imageForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 style:(long long)a1 isOverContent:(BOOL)a2;
+ (id)leadingCornerGradientBackgroundImageForLayoutDirection:(long long)a0;
+ (id)textForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 style:(long long)a1;
+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0;
+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0;
+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0;
+ (id)trailingCornerGradientBackgroundImageForLayoutDirection:(long long)a0;

@end
