@class NSSet, TIImageCacheClient, NSMutableSet, _UIActionWhenIdle;

@interface UIKeyboardCache : NSObject {
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
}

@property (retain, nonatomic) _UIActionWhenIdle *idleAction;

+ (id)sharedInstance;
+ (BOOL)enabled;

- (void)purge;
- (void)drawCachedImage:(id)a0 alpha:(double)a1 inContext:(struct CGContext { } *)a2;
- (struct CGImage { } *)cachedCompositeImageForCacheKeys:(id)a0 fromLayout:(id)a1 opacities:(id)a2;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1;
- (void)commitTransaction;
- (void)updateCacheForInputModes:(id)a0;
- (id)displayImagesForView:(id)a0 fromLayout:(id)a1 imageFlags:(id)a2;
- (void)incrementExpectedRender:(id)a0;
- (void)dealloc;
- (void)clearNonPersistentCache;
- (void)decrementExpectedRender:(id)a0;
- (id)init;
- (void)_didIdle;
- (id)uniqueLayoutsFromInputModes:(id)a0;
- (void).cxx_destruct;
- (void)_didIdleAndShouldWait;

@end
