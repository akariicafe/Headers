@class PUEditingExtensionUndoProxyHostSide, UIBarButtonItem, NSString, PUEditPlugin, NSNumber, UIViewController;
@protocol PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, NSCopying;

@interface PUEditPluginHostViewController : UIViewController <PXForcedDismissableViewController, PUEditingExtensionUndoButtonHost>

@property (retain, setter=_setRemoteViewController:) UIViewController *_remoteViewController;
@property (copy, setter=_setRequest:) id<NSCopying> _request;
@property (nonatomic, setter=_setExtensionDidBeginContentEditing:) BOOL _extensionDidBeginContentEditing;
@property (nonatomic, setter=_setDidHandleCancel:) BOOL _didHandleCancel;
@property (nonatomic, setter=_setDidHandleDone:) BOOL _didHandleDone;
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken;
@property (retain, nonatomic, setter=_setAllowsFullScreen:) NSNumber *_allowsFullScreen;
@property (retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy;
@property (weak, nonatomic) UIBarButtonItem *undoBarButtonItem;
@property (weak, nonatomic) UIBarButtonItem *redoBarButtonItem;
@property (nonatomic) BOOL showUndoRedoButtons;
@property (readonly, nonatomic) PUEditPlugin *plugin;
@property (weak, nonatomic) id<PUEditPluginHostViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<PUEditPluginHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (id)_extensionVendorProxy;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_handleDoneButton:(id)a0;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)_handleCancel;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPlugin:(id)a0;
- (void)_queryAllowsFullScreen:(id /* block */)a0;
- (void)loadRemoteViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)_handleVendorVersion:(unsigned int)a0 completion:(id /* block */)a1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)a0 withResponseHandler:(id /* block */)a1 timeout:(double)a2;
- (void)_beginContentEditingWithCompletionHandler:(id /* block */)a0 timeout:(double)a1;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)a0 timeout:(double)a1;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(BOOL)a0;
- (void)_updateBarButtonsWithUndoRedoVisible:(BOOL)a0;
- (void)_beginDisablingIdleTimer;
- (void)_setupUndoProxy;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)handleUndoButton:(id)a0;
- (void)handleRedoButton:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handleCancelButton:(id)a0;
- (void)_dismiss;
- (id)_hostContext;
- (void)setUndoEnabled:(BOOL)a0 redoEnabled:(BOOL)a1;
- (void)setShowUndoRedo:(BOOL)a0;

@end
