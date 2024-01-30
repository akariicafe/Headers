@class NSObject;
@protocol OS_dispatch_queue;

@interface AAUIAchievementResourceProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)glyphTexturePathForAchievement:(id)a0;
- (id)_assetBundleForAchievement:(id)a0;
- (id)_badgeModelFilenames:(id)a0;
- (id)_cachedModelsPath;
- (id)_compressedBadgeModelPathsForAchievement:(id)a0;
- (id)_modelDirectoryForAchievement:(id)a0;
- (id)_modelFilePathsForAchievement:(id)a0;
- (BOOL)_queue_decompressZipFileAtPath:(id)a0 toDirectory:(id)a1;
- (id)backSideIconImageForAchievement:(id)a0;
- (id)badgeConfigurationForAchievement:(id)a0;
- (id)badgeModelPathsForAchievement:(id)a0;
- (id)enamelColorForAchievement:(id)a0;
- (struct CGPoint { double x0; double x1; })glyphPositionOffsetScaleForAchievement:(id)a0;
- (double)glyphTextureScaleForAchievement:(id)a0;
- (id)metalColorForAchievement:(id)a0;
- (id)stickerURLsForAchievement:(id)a0;
- (id)stickersBundlePathForAchievement:(id)a0;
- (id)texturePathsForAchievement:(id)a0;

@end
