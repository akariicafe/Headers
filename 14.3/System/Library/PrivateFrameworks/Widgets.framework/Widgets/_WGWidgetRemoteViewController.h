@class NSObject, WGWidgetHostingViewController;
@protocol OS_dispatch_queue;

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC>

@property (nonatomic, getter=_isValid, setter=_setValid:) BOOL valid;
@property (weak, nonatomic) WGWidgetHostingViewController *managingHost;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)disconnect;
- (void).cxx_destruct;
- (void)_setActiveDisplayMode:(long long)a0;
- (void)_updateVisibilityState:(long long)a0;
- (void)_updateVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withReplyHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_openTransactionForAppearanceCallWithState:(int)a0 withIdentifier:(id)a1;
- (void)__requestPreferredViewHeight:(double)a0;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_setMaximumSize:(struct CGSize { double x0; double x1; })a0 forDisplayMode:(long long)a1;
- (void)__closeTransactionForAppearanceCallWithState:(int)a0 withIdentifier:(id)a1;
- (void)_updateLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_performUpdateWithReplyHandler:(id /* block */)a0;
- (BOOL)_serviceHasScrollToTopView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)__viewServiceDidRegisterScrollToTopView;
- (BOOL)_canShowWhileLocked;
- (void)__setLargestAvailableDisplayMode:(long long)a0;
- (void)_requestEncodedLayerTreeAtURL:(id)a0 withReplyHandler:(id /* block */)a1;

@end
