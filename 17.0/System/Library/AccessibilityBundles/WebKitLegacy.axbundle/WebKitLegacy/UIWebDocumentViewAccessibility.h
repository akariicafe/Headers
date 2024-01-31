@interface UIWebDocumentViewAccessibility : __UIWebDocumentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)toggleItalics:(id)a0;
- (id)accessibilityLabel;
- (void)setSelectedTextRange:(id)a0;
- (void)clearSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)cut:(id)a0;
- (void)toggleBoldface:(id)a0;
- (void)selectAll:(id)a0;
- (void)toggleUnderline:(id)a0;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (void)handleKeyWebEvent:(id)a0;
- (void)copy:(id)a0;
- (long long)accessibilityContainerType;
- (void)_showTextStyleOptions:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)paste:(id)a0;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectedDOMRange:(id)a0 affinity:(unsigned long long)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)stopLoading:(id)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 willShowFullScreenForPlugInView:(id)a1;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)_accessibilityIsWebDocumentView;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityContentFrame;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityMimicsTextInputResponder;
- (id)_accessibilityResponderElement;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilitySpeakThisString;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollUpPage;
- (void)_accessibilityZoomAtPoint:(struct CGPoint { double x0; double x1; })a0 zoomIn:(BOOL)a1;
- (void)_axZoomToCenterWithScale:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (id)_accessibilityDocumentView;
- (id)_accessibilityRootObject;

@end
