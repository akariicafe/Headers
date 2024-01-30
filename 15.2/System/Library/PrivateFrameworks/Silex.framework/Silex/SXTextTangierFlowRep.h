@class NSString, SXAXCustomRotor, SXTextTangierInteractiveCanvasController;
@protocol SXTextTangierRepAccessibilityDataSource;

@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement>

@property (retain, nonatomic) SXAXCustomRotor *linkRotor;
@property (retain, nonatomic) SXAXCustomRotor *headingsRotor;
@property (weak, nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (id)siblings;
- (id)storage;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityElements;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (BOOL)accessibilitySupportsTextSelection;
- (id)accessibilityPreviousTextNavigationElement;
- (id)accessibilityNextTextNavigationElement;
- (id)interactiveCanvasController;
- (id)supportedCustomRotors;
- (id)itemsForCustomRotor:(id)a0;
- (id)sxaxSupportedEditRotorActions;
- (id)sxaxNameForEditRotorAction:(id)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0 withGesture:(id)a1 passingTest:(id /* block */)a2;
- (BOOL)updateFromVisualPosition;
- (Class)wpEditorClass;
- (BOOL)p_doesRep:(id)a0 containCharIndex:(unsigned long long)a1 isStart:(BOOL)a2;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x0; double x1; })a0 isTail:(BOOL)a1 selectionType:(int)a2;
- (id)orderedSiblings;
- (id)sxaxLinkElements;
- (BOOL)forceTiling;
- (BOOL)preventClipToColumn;
- (id)repForCharIndex:(unsigned long long)a0 isStart:(BOOL)a1;

@end
