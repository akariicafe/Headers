@class NSString, NSURL, NSMutableDictionary;

@interface AVTResourceLocator : NSObject {
    NSMutableDictionary *_imageCache;
}

@property (class, readonly) NSString *generatedPlistFolderName;

@property (readonly) NSURL *resourcesURL;
@property (readonly) NSURL *memojiResourcesURL;
@property (readonly) NSURL *animojiResourcesURL;
@property (readonly) NSURL *stickerResourcesURL;
@property (readonly) NSURL *poseResourcesURL;
@property (readonly) NSURL *componentsURL;
@property (readonly) NSURL *materialsURL;
@property (readonly) NSURL *presetThumbnailsURL;
@property (readonly) NSURL *propsURL;

+ (id)sharedResourceLocator;
+ (id)_resourcePathInDirectoryURL:(id)a0 subDirectory:(id)a1 name:(id)a2 ofType:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (struct CGImage { } *)imageWithPath:(id)a0;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1;
- (id)resourcesURLForPathComponent:(id)a0;
- (id)pathForMemojiResource:(id)a0 ofType:(id)a1;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1;
- (id)pathForAnimojiResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForStickerResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1;
- (id)pathForPoseResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;

@end
