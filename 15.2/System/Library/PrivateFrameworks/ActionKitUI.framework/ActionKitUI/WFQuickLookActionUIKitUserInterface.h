@class NSString, WFContentCollection, QLPreviewController;

@interface WFQuickLookActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerPrivateDelegate, WFQuickLookActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFContentCollection *dataSource;
@property (retain, nonatomic) QLPreviewController *previewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)finishWithError:(id)a0;
- (void)previewControllerDidDismiss:(id)a0;
- (BOOL)previewController:(id)a0 canShareItem:(id)a1;
- (void).cxx_destruct;
- (void)showWithItems:(id)a0 fullScreen:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
