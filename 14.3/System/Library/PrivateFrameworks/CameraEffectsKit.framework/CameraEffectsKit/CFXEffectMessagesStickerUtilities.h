@interface CFXEffectMessagesStickerUtilities : NSObject

+ (id)animatedPreviewsDirectory;
+ (id)animatedPreviewFileNameForOverlayID:(id)a0;
+ (struct CGSize { double x0; double x1; })JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(long long)a0;
+ (void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)a0 atStickerSize:(long long)a1 previewDuration:(double)a2 previewFrameRate:(unsigned long long)a3 previewCompletedBlock:(id /* block */)a4;
+ (id)overlayIDFromAnimatedPreviewFileName:(id)a0;
+ (long long)numberOfStickersForEffectTypeId:(id)a0;
+ (id)stickerPropertiesForIndex:(long long)a0 forEffectTypeId:(id)a1;

@end
