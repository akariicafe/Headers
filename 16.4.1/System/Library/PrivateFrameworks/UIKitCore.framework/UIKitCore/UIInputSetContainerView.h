@class UIScreen, NSString, NSMutableDictionary, UIKBRenderConfig;

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost> {
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_hostedViews;
    BOOL _disableGeometryObserverNotifications;
}

@property (nonatomic) struct CGPoint { double x; double y; } offsetOrigin;
@property (readonly) UIScreen *hostingScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;

- (void)_didRemoveSubview:(id)a0;
- (void)_setRenderConfig:(id)a0;
- (id)_inputWindowController;
- (void)didAddSubview:(id)a0;
- (void)performWithoutGeometryObserverNotifications:(id /* block */)a0;
- (void)_setAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isTransparentFocusRegion;
- (void)dealloc;
- (id)_inheritedRenderConfig;
- (BOOL)_disableGeometryObserverNotification;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasHostedViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessoryViewFrame;
- (void)addHostedView:(id)a0 withViewRemovalHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
