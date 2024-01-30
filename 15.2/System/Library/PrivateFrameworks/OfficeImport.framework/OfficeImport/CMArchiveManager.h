@class NSString, NSMutableDictionary, NSMutableSet, NSCache;

@interface CMArchiveManager : NSObject <TCCancelDelegate> {
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    unsigned long long mPageCount;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    double mCommitInterval;
    BOOL mAutoCommit;
    NSCache *mStyleObjectCache;
}

@property (copy) NSString *passphrase;
@property BOOL noDecorations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceTypeToExtension:(int)a0;
+ (int)blipTypeToResourceType:(int)a0;
+ (id)resourceTypeToMIME:(int)a0;

- (unsigned long long)pageCount;
- (BOOL)isThumbnail;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)setPageCount:(unsigned long long)a0;
- (unsigned long long)resourceCount;
- (void)setIsThumbnail:(BOOL)a0;
- (void)setHTMLWidth:(int)a0;
- (void)setHTMLHeight:(int)a0;
- (void)pushText:(id)a0 toPath:(id)a1;
- (void)pushCssToPath:(id)a0;
- (void)commitDataAtPath:(id)a0;
- (void)closeResourceAtPath:(id)a0;
- (BOOL)isOnPhone;
- (BOOL)progressiveMappingIsPausedOnPath:(id)a0;
- (void)pauseProgressiveMappingOnPath:(id)a0;
- (void)restartProgressiveMappingOnPath:(id)a0;
- (id)copyResourceWithName:(id)a0 type:(int)a1;
- (id)copyResourceWithType:(int)a0;
- (void)pushData:(id)a0 toPath:(id)a1;
- (id)addResource:(id)a0 withType:(int)a1;
- (id)addCssStyle:(id)a0;
- (void)setCommitInterval:(double)a0;
- (void)setAutoCommit:(BOOL)a0;
- (id)_validateData:(id)a0 withType:(int *)a1;
- (id)addResource:(id)a0 withName:(id)a1 type:(int)a2;
- (id)addResourceForDrawable:(id)a0 withType:(int)a1 drawable:(id)a2;
- (id)cachedPathForDrawable:(id)a0;
- (void)setIsOnPhone:(BOOL)a0;
- (id)addStyle:(id)a0;
- (void)addCssStyle:(id)a0 withName:(id)a1;
- (id)cssStylesheetString;
- (void)setResourcePathPrefix:(id)a0;
- (id)resourcePathPrefix;
- (id)appendResourcePathToName:(id)a0;
- (BOOL)isProgressive;

@end
