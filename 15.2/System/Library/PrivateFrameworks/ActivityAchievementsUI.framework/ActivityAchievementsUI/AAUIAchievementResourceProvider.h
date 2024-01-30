@class NSObject;
@protocol OS_dispatch_queue;

@interface AAUIAchievementResourceProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)badgeConfigurationForAchievement:(id)a0;
- (id)_modelFilePathForAchievement:(id)a0;
- (id)_compressedBadgeModelPathForAchievement:(id)a0;
- (id)_modelDirectoryForAchievement:(id)a0;
- (BOOL)_queue_decompressZipFileAtPath:(id)a0 toDirectory:(id)a1;
- (id)_assetBundleForAchievement:(id)a0;
- (id)badgeModelPathForAchievement:(id)a0;
- (id)texturePathForAchievement:(id)a0;
- (id)metalColorForAchievement:(id)a0;
- (id)enamelColorForAchievement:(id)a0;
- (id)_cachedModelsPath;
- (id)_badgeModelFilename;
- (id)stickersBundlePathForAchievement:(id)a0;
- (id)stickerURLsForAchievement:(id)a0;
- (id)backSideIconImageForAchievement:(id)a0;

@end
