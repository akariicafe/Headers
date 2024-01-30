@class NSObject, TSUMutableRetainedPointerSet, TSSStylesheet;
@protocol OS_dispatch_queue;

@interface TSSStylesheetPasteboardProxy : TSPObject {
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    BOOL mSelfArchiving;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)addStyleReference:(id)a0;
- (id)initWithContext:(id)a0 stylesheet:(id)a1;

@end
