@interface WKContentViewAccessibility : __WKContentViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)toggleItalics:(id)a0;
- (BOOL)canBecomeFocused;
- (void)cut:(id)a0;
- (void)selectAll:(id)a0;
- (void)toggleBoldface:(id)a0;
- (void)_hideKeyboard;
- (void)paste:(id)a0;
- (void)_processDidExit;
- (id)accessibilityElements;
- (void)copy:(id)a0;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (void)_didRelaunchProcess;
- (void)handleKeyWebEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_zoomToRevealFocusedElement;
- (id)_accessibilityResponderElementForFocus;
- (long long)accessibilityContainerType;
- (void)dealloc;
- (BOOL)_accessibilityServesAsFirstResponder;
- (id)_accessibilityResponderElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)_accessibilityRegisterUIProcessTokens;
- (id)accessibilityDragSourceDescriptors;
- (BOOL)_accessibilityBeginUndoableTextInsertion;
- (BOOL)_accessibilityEndUndoableTextInsertion;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (id)_viewToAddFocusLayer;
- (void)increaseSizeForWebView:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_setAccessibilityWebProcessToken:(id)a0;
- (BOOL)_accessibilityIsScrollAncestor;
- (id)_systemDefaultFocusGroupDescriptor;
- (void)decreaseSizeForWebView:(id)a0;
- (id)_accessibilityHandwritingElement;
- (BOOL)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
- (void)toggleUnderline:(id)a0;
- (int)_accessibilityRemotePid;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (void)_registerForNotificationsIfNecessary;
- (void)_signalAccessibilityPageLoadCompleteForCatalyst;
- (void)_pasteboardChanged:(id)a0;
- (void)_axClearRemoteElements;
- (void)_axCleanupAfterTermination;

@end
