@class PDFPageBackgroundManagerPrivate;

@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback> {
    PDFPageBackgroundManagerPrivate *_private;
}

- (void)_cleanup;
- (void).cxx_destruct;
- (void)_update;
- (void)dealloc;
- (void)cancel;
- (id)initWithDelegate:(id)a0 andRenderingProperties:(id)a1;
- (void)updateActivePageIndex:(unsigned long long)a0;
- (void)willForceUpdate;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (id)backgroundImageForPageIndex:(unsigned long long)a0 withFoundQuality:(int *)a1;
- (void)didInsertPageAtIndex:(unsigned long long)a0;
- (void)didRemovePageAtIndex:(unsigned long long)a0;
- (void)didSwapPageAtIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (void)_drawPageImage:(unsigned long long)a0 forQuality:(int)a1;
- (void)_shiftImagesAtIndex:(unsigned long long)a0 downwards:(BOOL)a1;
- (BOOL)_findPageIndexNeedingUpdate:(unsigned long long *)a0 forQuality:(int *)a1;
- (BOOL)_expectedQualityIndexForPageIndex:(unsigned long long)a0 forQuality:(int *)a1;
- (BOOL)drawProgressCallback;
- (void)forceSetBackgroundImage:(id)a0 forPageIndex:(unsigned long long)a1;

@end
