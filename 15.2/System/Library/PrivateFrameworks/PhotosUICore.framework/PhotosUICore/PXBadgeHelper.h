@class UIImage;

@interface PXBadgeHelper : NSObject

@property (class, readonly, nonatomic) UIImage *favoriteBadgeImage;
@property (class, readonly, nonatomic) UIImage *favoritesCollectionBadgeImage;
@property (class, readonly, nonatomic) UIImage *panoramaBadgeImage;
@property (class, readonly, nonatomic) UIImage *contentSyndicationBadgeImage;
@property (class, readonly, nonatomic) UIImage *contentSyndicationGuestAssetBadgeImage;
@property (class, readonly, nonatomic) UIImage *gradientImage;
@property (class, readonly, nonatomic) UIImage *livePhotoBadgeShadowedImage;
@property (class, readonly, nonatomic) UIImage *loopingBadgeImage;
@property (class, readonly, nonatomic) UIImage *loopingBadgeTemplateImage;
@property (class, readonly, nonatomic) UIImage *cloudBadgeImage;
@property (class, readonly, nonatomic) UIImage *autoReframingImage;

+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;
+ (id)_favoriteBadgeImageWithSymbolConfiguration:(id)a0;
+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;
+ (id)cornerGradientBackgroundImageForLayoutDirection:(long long)a0;
+ (id)imageForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 style:(long long)a1 isOverContent:(BOOL)a2;
+ (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;
+ (id)debugBackgroundImageWithBadges:(unsigned long long)a0;
+ (id)_smallSymbolConfiguration;
+ (id)_mediumSymbolConfiguration;
+ (id)textForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 style:(long long)a1;

@end
