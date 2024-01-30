@interface UIWebDocumentViewAccessibility : __UIWebDocumentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)toggleBoldface:(id)a0;
- (void)clearSelection;
- (void)_showTextStyleOptions:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)paste:(id)a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)setSelectedDOMRange:(id)a0 affinity:(unsigned long long)a1;
- (void)setSelectedTextRange:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (void)stopLoading:(id)a0;
- (void)handleKeyWebEvent:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)webView:(id)a0 willShowFullScreenForPlugInView:(id)a1;
- (id)accessibilityElements;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)toggleUnderline:(id)a0;
- (long long)accessibilityContainerType;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)_accessibilityIsWebDocumentView;
- (BOOL)_accessibilityScrollingEnabled;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollDownPage;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilitySpeakThisString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityContentFrame;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityMimicsTextInputResponder;
- (void)_accessibilityZoomAtPoint:(struct CGPoint { double x0; double x1; })a0 zoomIn:(BOOL)a1;
- (void)_axZoomToCenterWithScale:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (id)_accessibilityRootObject;
- (id)_accessibilityDocumentView;

@end
