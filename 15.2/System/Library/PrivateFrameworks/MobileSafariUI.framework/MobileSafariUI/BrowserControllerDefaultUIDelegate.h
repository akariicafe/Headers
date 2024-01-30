@class MobileSafariWindow, NSString, PrivateBrowsingObfuscationWindow, AutomationOverlayWindow, BrowserController;

@interface BrowserControllerDefaultUIDelegate : NSObject <AutomationOverlayViewControllerDelegate, MobileSafariWindowDelegate, BrowserControllerUIDelegate> {
    BrowserController *_browserController;
    MobileSafariWindow *_window;
    PrivateBrowsingObfuscationWindow *_obfuscationWindow;
    AutomationOverlayWindow *_windowForAutomationOverlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)safariWindow:(id)a0 statusBarChangedFromHeight:(double)a1 toHeight:(double)a2;
- (void)browserControllerMakeKey:(id)a0;
- (void)automationOverlayControllerDidCancelAutomation:(id)a0;
- (id)initWithBrowserController:(id)a0;
- (BOOL)browserControllerShouldUpdateSnapshotForActiveTab:(id)a0;
- (BOOL)automationOverlayControllerShouldAllowUserInteraction:(id)a0;
- (void)browserControllerDidBeginIgnoringUserInteraction:(id)a0;
- (void)browserControllerStartPageUpdatePolicyDidChange:(id)a0;
- (void)browserControllerContentContainerViewFrameDidChange:(id)a0;
- (void)browserControllerDidEndObfuscating:(id)a0;
- (void)browserControllerWillBeginObfuscating:(id)a0;
- (void)browserControllerDidEndNavigationGesture:(id)a0;
- (void)browserControllerDidEndIgnoringUserInteraction:(id)a0;
- (void)_tearDownAutomationOverlay;
- (void)browserController:(id)a0 willConnectToScene:(id)a1 session:(id)a2 options:(id)a3;
- (double)browserControllerStatusBarWidth:(id)a0;
- (void).cxx_destruct;
- (id)browserController:(id)a0 tabSnapshotContentProviderForTabDocument:(id)a1;
- (id)browserController:(id)a0 tabDocumentViewGeometryProviderForTabDocumentView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })browserControllerWindowFrame:(id)a0;
- (void)_setUpAutomationOverlay;
- (void)automationOverlayController:(id)a0 didChangeAllowsUserInteraction:(BOOL)a1;
- (void)browserController:(id)a0 didDisconnectFromScene:(id)a1;
- (void)browserControllerWillBeginNavigationGesture:(id)a0;
- (void)browserControllerMakeKeyAndVisible:(id)a0;
- (void)automationOverlayControllerDidDisableAutomation:(id)a0;
- (void)_windowDidResignKeyWindow:(id)a0;

@end
