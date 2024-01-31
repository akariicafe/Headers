@interface WKContentViewAccessibility : __WKContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)toggleItalics:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)cut:(id)a0;
- (void)toggleBoldface:(id)a0;
- (void)_didRelaunchProcess;
- (void)selectAll:(id)a0;
- (void)_setAccessibilityWebProcessToken:(id)a0;
- (void)_processDidExit;
- (void)_zoomToRevealFocusedElement;
- (void)toggleUnderline:(id)a0;
- (void)_hideKeyboard;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (void)handleKeyWebEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)canBecomeFocused;
- (void)copy:(id)a0;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)_viewToAddFocusLayer;
- (void)decreaseSizeForWebView:(id)a0;
- (long long)accessibilityContainerType;
- (void)increaseSizeForWebView:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)paste:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityDragSourceDescriptors;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityBeginUndoableTextInsertion;
- (BOOL)_accessibilityEndUndoableTextInsertion;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (id)_accessibilityHandwritingElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (BOOL)_accessibilityIsScrollAncestor;
- (void)_accessibilityLoadAccessibilityInformation;
- (int)_accessibilityRemotePid;
- (id)_accessibilityResponderElement;
- (id)_accessibilityResponderElementForFocus;
- (BOOL)_accessibilityServesAsFirstResponder;
- (BOOL)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
- (void)_axCleanupAfterTermination;
- (void)_axClearRemoteElements;
- (void)_pasteboardChanged:(id)a0;
- (void)_registerForNotificationsIfNecessary;
- (void)_signalAccessibilityPageLoadCompleteForCatalyst;

@end
