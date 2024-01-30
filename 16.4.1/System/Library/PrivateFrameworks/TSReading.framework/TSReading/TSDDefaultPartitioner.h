@class NSString, TSDCanvas, TSDLayout, NSObject, TSUPointerKeyDictionary;
@protocol TSDInfo;

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate> {
    NSObject<TSDInfo> *mInfo;
    TSDCanvas *mCanvas;
    TSDLayout *mLayout;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (id)documentRoot;
- (id)i_repForCanvas:(id)a0;
- (BOOL)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(BOOL)a2 delta:(int)a3;
- (id)hintForLayout:(id)a0;
- (struct CGImage { } *)i_cachedImageForCanvas:(id)a0;
- (id)i_layout;
- (void)i_registerPartialRep:(id)a0;
- (void)i_removeCachedImageForCanvas:(id)a0;
- (void)i_setCachedImage:(struct CGImage { } *)a0 forCanvas:(id)a1;
- (void)i_unregisterPartialRep:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (unsigned long long)p_edgesForHintBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_firstHintForSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_generateLayouts;
- (id)p_nextHintForSize:(struct CGSize { double x0; double x1; })a0 previousHint:(id)a1 horizontally:(BOOL)a2;
- (void)p_teardownLayouts;

@end
