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
- (id)init;
- (struct CGImage { } *)cachedCompositeImageForCacheKeys:(id)a0 fromLayout:(id)a1 opacities:(id)a2;
- (void)dealloc;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1;
- (void)decrementExpectedRender:(id)a0;
- (void)incrementExpectedRender:(id)a0;
- (id)displayImagesForView:(id)a0 fromLayout:(id)a1 imageFlags:(id)a2;
- (void)updateCacheForInputModes:(id)a0;
- (void)_didIdle;
- (void)clearNonPersistentCache;
- (void)drawCachedImage:(id)a0 alpha:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)uniqueLayoutsFromInputModes:(id)a0;
- (void)_didIdleAndShouldWait;
- (void)commitTransaction;

@end
