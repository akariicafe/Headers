@class NSArray, NSTextRange, NSTextLayoutManager, NSMutableArray;
@protocol NSTextViewportLayoutControllerDelegate, NSTextViewportLayoutDelegate_Private, NSTextViewportElementProvider;

@interface NSTextViewportLayoutController : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewportBounds;
    struct CGPoint { double x; double y; } _viewportOffset;
    NSTextRange *_viewportRange;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    id<NSTextViewportLayoutDelegate_Private> _delegate;
    struct { unsigned char _layoutIsValid : 1; unsigned char _needsLayout : 1; unsigned char _delegateConformsToPublicAPI : 1; unsigned char _delegateSupportsLocationPositionMapping : 1; unsigned char _needsLayoutSelectorType : 2; } _viewportLayoutControllerFlags;
}

@property (class, readonly) BOOL flushesCachedViewportElements;

@property (readonly, weak) id<NSTextViewportElementProvider> elementProvider;
@property (weak) id<NSTextViewportLayoutControllerDelegate> delegate;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewportBounds;
@property (readonly) NSTextRange *viewportRange;

+ (BOOL)flushesCachedViewportElements;

- (void)setNeedsLayout;
- (void)layoutViewport;
- (void)addViewportLayoutObserver:(id)a0;
- (id)locationAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustViewport:(double)a0 atLocation:(id)a1 verticalOffsetFromLocation:(double)a2;
- (id)textViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeViewportLayoutObserver:(id)a0;
- (id)textViewportElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustViewportByVerticalOffset:(double)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (void)enumerateTextViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithElementProvider:(id)a0;
- (double)relocateViewportToTextLocation:(id)a0;
- (id)textViewportElementForLocation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewportBounds;
- (void).cxx_destruct;
- (id)initWithTextLayoutManager:(id)a0;

@end
