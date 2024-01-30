@class NSMutableArray;

@interface TSDFrameImageCache : NSObject {
    NSMutableArray *mEntries;
}

+ (id)sharedFrameImageCache;

- (id)init;
- (void)dealloc;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (struct CGImage { } *)newCachedImageForFrame:(id)a0 size:(struct CGSize { double x0; double x1; })a1 viewScale:(double)a2 forCALayer:(BOOL)a3 mask:(BOOL)a4;
- (struct CGImage { } *)setCachedImage:(struct CGImage { } *)a0 forFrame:(id)a1 size:(struct CGSize { double x0; double x1; })a2 viewScale:(double)a3 forCALayer:(BOOL)a4 mask:(BOOL)a5;
- (id)p_newEntryForFrame:(id)a0 size:(struct CGSize { double x0; double x1; })a1 viewScale:(double)a2 createIfNeeded:(BOOL)a3;
- (void)p_flush;

@end
