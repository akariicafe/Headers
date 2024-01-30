@class UIPDFPageView;
@protocol UIPDFSelectionWidget, NSObject;

@interface UIPDFSelectionController : NSObject {
    BOOL _resizingWidget;
    struct CGPoint { double x; double y; } _selectionFixedPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionBounds;
    BOOL _preceeds;
    BOOL _hiding;
    long long _firstIndex;
    long long _lastIndex;
    struct CGPoint { double x; double y; } _startPoint;
    BOOL _needsLayout;
    BOOL _cancelled;
    BOOL _instantModeIsSuspended;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (readonly, nonatomic) BOOL rangeMode;
@property (readonly, nonatomic) id<UIPDFSelectionWidget, NSObject> selectionWidget;
@property (readonly, nonatomic) BOOL isTracking;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } adjustedPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } initialSelectionPoint;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentSelectionPoint;
@property (nonatomic) BOOL instantHighlightMode;

- (void)clearSelection;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)endTracking:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSelections;
- (void)hideWidget;
- (void)addSelectionWidget:(id)a0;
- (void)suspendInstantHighlightMode;
- (void)selectionHideFromAncestor:(id)a0;
- (void)selectionShowToAncestor:(id)a0;
- (void)selectionHide:(id)a0;
- (void)selectionShowDelayed:(id)a0;
- (void)selectionShow:(id)a0;
- (void)setSelectionFor:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)useParagraphMode;
- (void)startSelectingAt:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustSelection:(struct CGPoint { double x0; double x1; })a0;
- (void)extendSelectionToParagraph;
- (BOOL)shouldTrackAt:(struct CGPoint { double x0; double x1; })a0;
- (void)startTracking:(struct CGPoint { double x0; double x1; })a0 showMagnifier:(BOOL *)a1;
- (void)tracking:(struct CGPoint { double x0; double x1; })a0 showMagnifier:(BOOL *)a1;
- (void)startTracking:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)tracking:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })selectedPointOffset;

@end
