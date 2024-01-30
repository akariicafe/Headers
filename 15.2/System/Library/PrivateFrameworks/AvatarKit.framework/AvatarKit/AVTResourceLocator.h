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

@property (readonly) NSURL *resourcesURL;
@property (readonly) NSURL *memojiResourcesURL;
@property (readonly) NSURL *animojiResourcesURL;
@property (readonly) NSURL *stickerResourcesURL;
@property (readonly) NSURL *poseResourcesURL;
@property (readonly) NSURL *memojiAssetsURL;
@property (readonly) NSURL *rootCacheURL;
@property (readonly) NSURL *subdivDataCacheURL;

+ (id)sharedResourceLocator;
+ (id)_resourcePathInDirectoryURL:(id)a0 subDirectory:(id)a1 name:(id)a2 ofType:(id)a3;

- (void).cxx_destruct;
- (id)init;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1;
- (void)initCaches;
- (void)deleteLegacyCache;
- (void)deleteObsoleteVersionsInCache:(id)a0 currentVersion:(unsigned long long)a1;
- (id)pathForEnvironmentResource:(id)a0 ofType:(id)a1;
- (id)pathForEnvironmentResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (struct CGImage { } *)imageWithPath:(id)a0;

@end
