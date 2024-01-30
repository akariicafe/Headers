@class NSString, NSURL, NSMutableDictionary;

@interface AVTResourceLocator : NSObject {
    NSMutableDictionary *_imageCache;
    NSURL *_resourcesURL;
    NSURL *_environmentResourcesURL;
    NSURL *_memojiResourcesURL;
    NSURL *_animojiResourcesURL;
    NSURL *_stickerResourcesURL;
    NSURL *_poseResourcesURL;
    NSURL *_memojiAssetsURL;
    NSURL *_rootCacheURL;
    NSURL *_subdivDataCacheURL;
}

@property (class, readonly) NSString *generatedPlistFolderName;

@property (readonly) NSURL *rootCacheURL;
@property (readonly) NSURL *subdivDataCacheURL;

+ (id)_resourcePathInDirectoryURL:(id)a0 subDirectory:(id)a1 name:(id)a2 ofType:(id)a3;
+ (id)sharedResourceLocator;

- (id)init;
- (void).cxx_destruct;
- (struct CGImage { } *)imageWithPath:(id)a0;
- (void)deleteLegacyCache;
- (void)deleteObsoleteVersionsInCache:(id)a0 currentVersion:(unsigned long long)a1;
- (void)initCaches;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForEnvironmentResource:(id)a0 ofType:(id)a1;
- (id)pathForEnvironmentResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)urlForMemojiAssetAtPath:(id)a0;
- (id)urlForMemojiResourceAtPath:(id)a0;
- (id)urlForStickerResourceAtPath:(id)a0;

@end
