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
- (void)updateCacheForInputModes:(id)a0;
- (struct CGImage { } *)cachedCompositeImageForCacheKeys:(id)a0 fromLayout:(id)a1 opacities:(id)a2;
- (void)commitTransaction;
- (id)uniqueLayoutsFromInputModes:(id)a0;
- (void)drawCachedImage:(id)a0 alpha:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)_didIdle;
- (id)init;
- (void)incrementExpectedRender:(id)a0;
- (void)decrementExpectedRender:(id)a0;
- (void)clearNonPersistentCache;
- (void)dealloc;
- (id)displayImagesForView:(id)a0 fromLayout:(id)a1 imageFlags:(id)a2;
- (void)_didIdleAndShouldWait;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1;

@end
