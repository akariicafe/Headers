@interface WKContentViewAccessibility : __WKContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)toggleBoldface:(id)a0;
- (void)_zoomToRevealFocusedElement;
- (void)_setAccessibilityWebProcessToken:(id)a0;
- (void)_processDidExit;
- (void)increaseSizeForWebView:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)paste:(id)a0;
- (void)decreaseSizeForWebView:(id)a0;
- (void)_didRelaunchProcess;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (id)_viewToAddFocusLayer;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityDragSourceDescriptors;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)handleKeyWebEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_hideKeyboard;
- (id)accessibilityElements;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (void)toggleUnderline:(id)a0;
- (long long)accessibilityContainerType;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsScrollAncestor;
- (id)_accessibilityHandwritingElement;
- (BOOL)accessibilityParentDiscardsChildrenContainerGroupingBehavior;
- (BOOL)_accessibilityHandlesRemoteFocusMovement;
- (int)_accessibilityRemotePid;
- (id)_accessibilityResponderElementForFocus;
- (BOOL)_accessibilityServesAsFirstResponder;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityBeginUndoableTextInsertion;
- (BOOL)_accessibilityEndUndoableTextInsertion;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (void)_registerForNotificationsIfNecessary;
- (void)_signalAccessibilityPageLoadCompleteForCatalyst;
- (void)_pasteboardChanged:(id)a0;
- (void)_axClearRemoteElements;
- (void)_axCleanupAfterTermination;

@end
