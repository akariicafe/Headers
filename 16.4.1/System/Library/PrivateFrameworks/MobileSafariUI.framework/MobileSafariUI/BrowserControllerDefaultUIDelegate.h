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

- (id)initWithBrowserController:(id)a0;
- (void)browserController:(id)a0 setCrashBanner:(id)a1 animated:(BOOL)a2;
- (void)browserControllerShouldUpdateUnifiedBarVisibility:(id)a0;
- (void)browserControllerWillBeginObfuscating:(id)a0;
- (void)browserControllerStartPageUpdatePolicyDidChange:(id)a0;
- (id)appBannerForBrowserController:(id)a0;
- (void)safariWindow:(id)a0 statusBarChangedFromHeight:(double)a1 toHeight:(double)a2;
- (void)browserControllerMakeKeyAndVisible:(id)a0;
- (double)browserControllerStatusBarWidth:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })browserControllerWindowFrame:(id)a0;
- (void)automationOverlayControllerDidCancelAutomation:(id)a0;
- (id)browserControllerCatalogViewController:(id)a0;
- (void)browserController:(id)a0 updateViewForActiveTabDocument:(id)a1;
- (id)sidebarUIProxyForBrowserController:(id)a0;
- (id)browserControllerNextResponder:(id)a0;
- (void)_tearDownAutomationOverlay;
- (void)browserController:(id)a0 setCatalogViewController:(id)a1;
- (void)browserController:(id)a0 showWebExtensionBanner:(id)a1;
- (void)browserControllerDidEndNavigationGesture:(id)a0;
- (void)browserControllerDidEndIgnoringUserInteraction:(id)a0;
- (void)automationOverlayControllerDidDisableAutomation:(id)a0;
- (void)browserControllerDidEndObfuscating:(id)a0;
- (BOOL)automationOverlayControllerShouldAllowUserInteraction:(id)a0;
- (void)browserControllerContentContainerViewFrameDidChange:(id)a0;
- (void)_setUpAutomationOverlay;
- (void)updateTabViewPinchRecognizerForBrowserController:(id)a0;
- (void)browserController:(id)a0 animateSafariIconLinkFromPoint:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)browserControllerContentContainerView:(id)a0;
- (void)automationOverlayController:(id)a0 didChangeAllowsUserInteraction:(BOOL)a1;
- (id)browserController:(id)a0 tabDocumentViewGeometryProviderForTabDocumentView:(id)a1;
- (void)browserController:(id)a0 animateLinkImage:(struct CGImage { } *)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3 toBarItem:(long long)a4;
- (id)browserController:(id)a0 tabSnapshotContentProviderForTabDocument:(id)a1;
- (double)browserControllerCatalogViewPopoverWidth:(id)a0;
- (BOOL)browserControllerShouldIncreaseTopPaddingForStartPage:(id)a0;
- (void)browserControllerDidBeginIgnoringUserInteraction:(id)a0;
- (BOOL)browserControllerShouldUpdateSnapshotForActiveTab:(id)a0;
- (id)browserControllerNavigationBar:(id)a0;
- (id)browserControllerTabHoverPreview:(id)a0;
- (id)viewControllerToPresentFromForBrowserController:(id)a0;
- (void)browserController:(id)a0 didDisconnectFromScene:(id)a1;
- (void)_windowDidResignKeyWindow:(id)a0;
- (void)browserController:(id)a0 willConnectToScene:(id)a1 session:(id)a2 options:(id)a3;
- (id)crashBannerForBrowserController:(id)a0;
- (void)browserController:(id)a0 setAppBanner:(id)a1 animated:(BOOL)a2;
- (id)browserControllerTabBarManager:(id)a0;
- (void)browserController:(id)a0 webExtensionWasRemotelyEnabled:(id)a1;
- (void)browserControllerMakeKey:(id)a0;
- (void).cxx_destruct;
- (void)browserControllerWillBeginNavigationGesture:(id)a0;
- (void)browserControllerLayOutCatalogView:(id)a0;
- (void)handleTabViewPinchForBrowserController:(id)a0;

@end
