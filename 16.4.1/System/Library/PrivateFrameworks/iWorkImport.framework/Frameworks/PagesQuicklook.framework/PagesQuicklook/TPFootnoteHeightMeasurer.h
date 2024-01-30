@class NSString, TSULRUCache, TSDCanvas, TPDocumentRoot, TPFootnoteContainerLayout;
@protocol TSDCanvasProxyDelegate, TPFootnotePageDelegate;

@interface TPFootnoteHeightMeasurer : NSObject <TSDCanvasDelegate, TSWPFootnoteHeightMeasurer> {
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TPDocumentRoot *_documentRoot;
    TSDCanvas *_canvas;
    TSULRUCache *_footnoteLayoutCache;
    id<TPFootnotePageDelegate> _pageDelegate;
}

@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly, nonatomic) BOOL verticalTextAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void).cxx_destruct;
- (id)documentRoot;
- (void)removeFootnoteReferenceStorage:(id)a0;
- (void)addFootnoteReferenceStorage:(id)a0;
- (void)removeAllFootnoteReferenceStorages;
- (void)setFootnoteSpacing:(long long)a0;
- (BOOL)shouldShowInstructionalTextForLayout:(id)a0;
- (BOOL)footnoteContainerFitsForTarget:(id)a0;
- (BOOL)canHaveFootnotesFromPreviousTarget:(id)a0;
- (double)footnoteBlockHeightForTarget:(id)a0;
- (BOOL)footnoteContainerIsOnSamePageAsTarget:(id)a0;
- (double)footnoteBlockHeight;
- (BOOL)hasFootnotes;
- (id)initWithFootnoteMarkProvider:(id)a0 documentRoot:(id)a1 pageDelegate:(id)a2 maxFootnoteLineWidth:(double)a3 maxFootnoteBlockHeight:(double)a4 vertical:(BOOL)a5 footnoteSpacing:(double)a6;
- (void)p_clearFootnoteLayoutCache;
- (void)setContainerLineWidth:(double)a0;

@end
