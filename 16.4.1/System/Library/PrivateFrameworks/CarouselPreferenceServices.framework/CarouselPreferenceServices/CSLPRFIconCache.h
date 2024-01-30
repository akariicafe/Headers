@class NSCache;

@interface CSLPRFIconCache : NSObject {
    NSCache *_cache;
}

+ (id)sharedIconCache;

- (id)_path;
- (id)init;
- (void).cxx_destruct;
- (id)_pathForIconName:(id)a0;
- (id)_loadMMappedImageWithName:(id)a0;
- (void)_writeMMappedImage:(id)a0 withName:(id)a1;
- (id)iconForName:(id)a0 fallBackToPersistentStoreIfNecessary:(BOOL)a1;
- (void)setIcon:(id)a0 forName:(id)a1;

@end
