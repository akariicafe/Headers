@class DOCAppearance, DOCConfiguration, DOCRemoteContext;
@protocol DOCRemoteViewControllerDelegate;

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface>

@property (retain) DOCRemoteContext *hostContext;
@property (retain) DOCConfiguration *configuration;
@property BOOL isBrowserViewController;
@property (retain) DOCAppearance *lastAppearance;
@property (weak) id<DOCRemoteViewControllerDelegate> delegate;

+ (id)serviceExtension;
+ (id)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)a0 configuration:(id)a1 completionBlock:(id /* block */)a2;
+ (id)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)a0 configuration:(id)a1 completionBlock:(id /* block */)a2;
+ (id)instantiateRemoteViewControllerWithConfiguration:(id)a0 transparent:(BOOL)a1 errorHandler:(id /* block */)a2 hostProxy:(id)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)updateAppearance:(id)a0 completionBlock:(id /* block */)a1;
- (void)updateAppearance:(id)a0 shouldFlushCA:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)updateEditingTo:(BOOL)a0 animated:(BOOL)a1;

@end
