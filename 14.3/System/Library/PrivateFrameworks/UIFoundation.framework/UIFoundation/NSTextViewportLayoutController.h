@class NSArray, NSMutableArray, NSTextRange;
@protocol NSTextViewportLayoutDelegate, NSTextViewportElementProvider;

@interface NSTextViewportLayoutController : NSObject {
    struct CGPoint { double x; double y; } _viewportOffset;
    NSTextRange *_viewportRange;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    id<NSTextViewportLayoutDelegate> _delegate;
    BOOL _layoutIsValid;
    BOOL _delegateSupportsLocationPositionMapping;
}

@property (weak) id<NSTextViewportLayoutDelegate> delegate;
@property (readonly, weak) id<NSTextViewportElementProvider> elementProvider;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportBounds;
@property (readonly) NSTextRange *viewportRange;

- (id)initWithElementProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (id)textViewportElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)adjustViewport:(double)a0;
- (id)textViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textViewportElementForLocation:(id)a0;
- (void)layoutViewport;
- (double)relocateViewport:(id)a0;
- (id)locationAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustViewport:(double)a0 atLocation:(id)a1 verticalOffsetFromLocation:(double)a2;
- (void)removeViewportLayoutObserver:(id)a0;
- (void)enumerateTextViewportElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (void)addViewportLayoutObserver:(id)a0;

@end
